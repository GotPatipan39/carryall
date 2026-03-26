"""
Motor Controller Node for CarryAll AGV (Hand Lift / Tricycle Model)
Subscribes to cmd_vel (Twist) and sends velocity and steering to FX5U PLC
"""

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math
import logging
import yaml
import os
from ament_index_python.packages import get_package_share_directory

# Import local modules
try:
    from .modbus_handler import ModbusHandler, MockModbusHandler
except ImportError:
    from modbus_handler import ModbusHandler, MockModbusHandler


class MotorControllerNode(Node):
    """
    ROS2 Node for Hand Lift AGV (Single Drive/Steer Wheel)
    - Receives (v, omega) from cmd_vel
    - Computes Wheel Velocity (v) and Steer Angle (phi)
    - Sends commands to FX5U PLC via Modbus TCP
    """
    
    def __init__(self):
        super().__init__('motor_controller_node')
        
        # Parameters
        self.declare_parameter('use_mock', False)
        self.declare_parameter('plc_ip', '192.168.1.10')
        self.declare_parameter('plc_port', 502)
        self.declare_parameter('wheelbase', 0.85)
        self.declare_parameter('linear_velocity_reg', 100)
        self.declare_parameter('target_steer_angle_reg', 102)
        self.declare_parameter('velocity_scale', 1000.0)
        self.declare_parameter('steer_angle_scale', 100.0) # Degrees * 100
        self.declare_parameter('max_linear_speed', 1.0)
        self.declare_parameter('max_steer_angle_deg', 90.0)
        self.declare_parameter('cmd_vel_timeout', 0.5)
        
        # Initialize Modbus
        use_mock = self.get_parameter('use_mock').value
        plc_ip = self.get_parameter('plc_ip').value
        plc_port = self.get_parameter('plc_port').value
        
        if use_mock:
            self._plc = MockModbusHandler(ip=plc_ip, port=plc_port)
        else:
            self._plc = ModbusHandler(ip=plc_ip, port=plc_port)
            
        if not self._plc.connect():
            self.get_logger().error(f"Failed to connect to FX5U PLC at {plc_ip}")
        
        # State
        self._last_cmd_vel_time = self.get_clock().now()
        self._current_v = 0.0
        self._current_phi_deg = 0.0
        
        # Subscriber
        self._cmd_vel_sub = self.create_subscription(Twist, 'cmd_vel', self._cmd_vel_callback, 10)
        
        # Watchdog
        self._watchdog_timer = self.create_timer(0.1, self._watchdog_callback)
        
        self.get_logger().info("Hand Lift Controller Node initialized")
    
    def _cmd_vel_callback(self, msg: Twist):
        """Convert (v, omega) to (v, phi) for Tricycle kinematics"""
        self._last_cmd_vel_time = self.get_clock().now()
        
        v = msg.linear.x
        omega = msg.angular.z
        L = self.get_parameter('wheelbase').value
        max_v = self.get_parameter('max_linear_speed').value
        max_phi_deg = self.get_parameter('max_steer_angle_deg').value
        
        # Apply speed limit
        v = max(-max_v, min(max_v, v))
        
        # Calculate Steering Angle (phi)
        # Using atan2 to handle v=0 case more gracefully
        # If moving forward/backward: phi = atan(omega * L / v)
        if abs(v) > 0.01:
            phi_rad = math.atan2(omega * L, abs(v))
        elif abs(omega) > 0.01:
            # If stationary but trying to turn, set max/min steering
            phi_rad = math.copysign(math.pi/2, omega)
        else:
            phi_rad = 0.0
            
        phi_deg = math.degrees(phi_rad)
        
        # Limit steering angle
        phi_deg = max(-max_phi_deg, min(max_phi_deg, phi_deg))
        
        self._current_v = v
        self._current_phi_deg = phi_deg
        
        # Send to PLC
        self._send_to_plc(v, phi_deg)
        
    def _send_to_plc(self, v, phi_deg):
        v_reg = self.get_parameter('linear_velocity_reg').value
        phi_reg = self.get_parameter('target_steer_angle_reg').value
        v_scale = self.get_parameter('velocity_scale').value
        phi_scale = self.get_parameter('steer_angle_scale').value
        
        # Convert to raw integers (assuming 16-bit signed for velocity and angle)
        v_raw = int(v * v_scale)
        phi_raw = int(phi_deg * phi_scale)
        
        if self._plc.is_connected():
            self._plc.write_register(v_reg, v_raw)
            self._plc.write_register(phi_reg, phi_raw)
            self.get_logger().debug(f"PLC CMD: v={v_raw}, phi={phi_raw}")
            
    def _watchdog_callback(self):
        """Failsafe: Stop robot if no command received"""
        now = self.get_clock().now()
        dt = (now - self._last_cmd_vel_time).nanoseconds / 1e9
        
        if dt > self.get_parameter('cmd_vel_timeout').value:
            if abs(self._current_v) > 0.0:
                self.get_logger().warn("CmdVel Timeout! Stopping robot.")
                self._current_v = 0.0
                self._send_to_plc(0.0, self._current_phi_deg)

    def destroy_node(self):
        self._send_to_plc(0.0, 0.0)
        self._plc.disconnect()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = MotorControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
