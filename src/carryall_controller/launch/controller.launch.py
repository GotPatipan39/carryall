"""
Launch file for CarryAll Controller
Starts PLC bridge and odometry publisher nodes
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # Launch arguments
    use_mock_arg = DeclareLaunchArgument(
        'use_mock',
        default_value='false',
        description='Use mock PLC for development without hardware'
    )
    
    plc_ip_arg = DeclareLaunchArgument(
        'plc_ip',
        default_value='192.168.1.10',
        description='PLC IP address'
    )
    
    plc_port_arg = DeclareLaunchArgument(
        'plc_port',
        default_value='502',
        description='PLC Modbus TCP port'
    )
    
    # PLC Bridge Node
    plc_bridge_node = Node(
        package='carryall_controller',
        executable='plc_bridge_node',
        name='plc_bridge_node',
        output='screen',
        parameters=[{
            'use_mock': LaunchConfiguration('use_mock'),
            'plc_ip': LaunchConfiguration('plc_ip'),
            'plc_port': LaunchConfiguration('plc_port'),
            'linear_velocity_register': 100,
            'angular_velocity_register': 102,
            'velocity_scale': 1000.0,
            'max_linear_speed': 1.0,
            'max_angular_speed': 1.0,
            'cmd_vel_timeout': 0.5,
        }]
    )
    
    # Odometry Publisher Node
    odom_publisher_node = Node(
        package='carryall_controller',
        executable='odom_publisher',
        name='odom_publisher',
        output='screen',
        parameters=[{
            'use_mock': LaunchConfiguration('use_mock'),
            'plc_ip': LaunchConfiguration('plc_ip'),
            'plc_port': LaunchConfiguration('plc_port'),
            'left_encoder_register': 200,
            'right_encoder_register': 202,
            'encoder_scale': 1000.0,
            'wheel_separation': 0.5,
            'wheel_radius': 0.1,
            'publish_rate': 50.0,
        }]
    )
    
    return LaunchDescription([
        use_mock_arg,
        plc_ip_arg,
        plc_port_arg,
        plc_bridge_node,
        odom_publisher_node,
    ])
