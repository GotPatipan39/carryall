"""
Odometry Publisher for CarryAll AGV (Hand Lift / Tricycle Model)
Reads 32-bit drive encoder and potentiometer from FX5U PLC
"""

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
import math
import struct

# Import local modules
try:
    from .modbus_handler import ModbusHandler, MockModbusHandler
except ImportError:
    from modbus_handler import ModbusHandler, MockModbusHandler


class OdometryPublisher(Node):
    """
    Tricycle Model Odometry (Single Drive/Steer Wheel)
    - Reads 32-bit encoder (D200-D201)
    - Reads Steer Poten (D204)
    - Publishes Odometry and TF
    """
    
    def __init__(self):
        super().__init__('odom_publisher')
        
        # Parameters
        self.declare_parameter('use_mock', False)
        self.declare_parameter('plc_ip', '192.168.1.10')
        self.declare_parameter('plc_port', 502)
        self.declare_parameter('wheelbase', 0.85)
        self.declare_parameter('wheel_radius', 0.125)
        self.declare_parameter('drive_encoder_reg', 200)
        self.declare_parameter('steering_poten_reg', 204)
        self.declare_parameter('encoder_ticks_per_rev', 4096)
        self.declare_parameter('poten_center_value', 5000)
        self.declare_parameter('poten_scale', 0.000314) # Raw units to Radians
        self.declare_parameter('publish_rate', 50.0)
        
        # Initialize Modbus
        use_mock = self.get_parameter('use_mock').value
        plc_ip = self.get_parameter('plc_ip').value
        plc_port = self.get_parameter('plc_port').value
        
        if use_mock:
            self._plc = MockModbusHandler(ip=plc_ip, port=plc_port)
        else:
            self._plc = ModbusHandler(ip=plc_ip, port=plc_port)
        
        self._plc.connect()
        
        # Robot State
        self._x = 0.0
        self._y = 0.0
        self._theta = 0.0
        
        self._prev_drive_ticks = 0
        self._first_reading = True
        
        # Publishers
        self._odom_pub = self.create_publisher(Odometry, 'odom', 10)
        self._tf_broadcaster = TransformBroadcaster(self)
        
        # Timer
        rate = self.get_parameter('publish_rate').value
        self._timer = self.create_timer(1.0/rate, self._update_odom)
        
        self.get_logger().info("Tricycle Odometry Publisher ready")

    def _read_32bit_register(self, address):
        """Read two 16-bit registers and combine into a 32-bit signed integer (Little Endian)"""
        regs = self._plc.read_holding_registers(address, 2)
        if regs is None or len(regs) < 2:
            return None
        # Combine registers (Assuming FX5U stores D200 as Low and D201 as High)
        raw_bytes = struct.pack('<HH', regs[0], regs[1])
        return struct.unpack('<i', raw_bytes)[0]

    def _update_odom(self):
        if not self._plc.is_connected():
            return
            
        # Read Drive Encoder (32-bit)
        drive_ticks = self._read_32bit_register(self.get_parameter('drive_encoder_reg').value)
        
        # Read Steering Poten (16-bit)
        poten_reg = self.get_parameter('steering_poten_reg').value
        poten_result = self._plc.read_holding_registers(poten_reg, 1)
        
        if drive_ticks is None or poten_result is None:
            return

        poten_raw = poten_result[0]
        
        if self._first_reading:
            self._prev_drive_ticks = drive_ticks
            self._first_reading = False
            return
            
        # 1. Calculate change in drive distance
        delta_ticks = drive_ticks - self._prev_drive_ticks
        self._prev_drive_ticks = drive_ticks
        
        R = self.get_parameter('wheel_radius').value
        TPR = self.get_parameter('encoder_ticks_per_rev').value
        distance_per_tick = (2.0 * math.pi * R) / TPR
        ds = delta_ticks * distance_per_tick
        
        # 2. Calculate steering angle (phi)
        center = self.get_parameter('poten_center_value').value
        scale = self.get_parameter('poten_scale').value
        phi = (poten_raw - center) * scale # Current steering angle in radians
        
        # 3. Update pose (Tricycle / Bicycle model)
        L = self.get_parameter('wheelbase').value
        
        # Rotation change based on distance moved and steer angle
        # d_theta = (ds * tan(phi)) / L
        d_theta = (ds * math.tan(phi)) / L
        
        # Displacement in local frame
        # dx_local = ds * cos(phi/2) # Approximation
        # dy_local = ds * sin(phi/2)
        
        # Update global pose
        avg_theta = self._theta + (d_theta / 2.0)
        self._x += ds * math.cos(avg_theta)
        self._y += ds * math.sin(avg_theta)
        self._theta += d_theta
        
        # Normalize theta
        self._theta = math.atan2(math.sin(self._theta), math.cos(self._theta))
        
        # 4. Broadcast & Publish
        self._publish_data(phi)

    def _publish_data(self, steer_angle):
        now = self.get_clock().now().to_msg()
        qz = math.sin(self._theta / 2.0)
        qw = math.cos(self._theta / 2.0)
        
        # Odom Msg
        odom = Odometry()
        odom.header.stamp = now
        odom.header.frame_id = 'odom'
        odom.child_frame_id = 'base_link'
        odom.pose.pose.position.x = self._x
        odom.pose.pose.position.y = self._y
        odom.pose.pose.orientation.z = qz
        odom.pose.pose.orientation.w = qw
        self._odom_pub.publish(odom)
        
        # TF
        t = TransformStamped()
        t.header.stamp = now
        t.header.frame_id = 'odom'
        t.child_frame_id = 'base_link'
        t.transform.translation.x = self._x
        t.transform.translation.y = self._y
        t.transform.rotation.z = qz
        t.transform.rotation.w = qw
        self._tf_broadcaster.sendTransform(t)

def main(args=None):
    rclpy.init(args=args)
    node = OdometryPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
