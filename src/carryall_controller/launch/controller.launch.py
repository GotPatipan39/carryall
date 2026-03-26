"""
Launch file for CarryAll Controller
Starts PLC bridge and odometry publisher nodes with configuration from YAML
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # Paths
    pkg_share_dir = get_package_share_directory('carryall_controller')
    default_config_path = os.path.join(pkg_share_dir, 'config', 'plc_params.yaml')

    # Launch arguments
    use_mock_arg = DeclareLaunchArgument(
        'use_mock',
        default_value='false',
        description='Use mock PLC for development without hardware'
    )
    
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=default_config_path,
        description='Path to the PLC configuration YAML file'
    )
    
    # Common parameters (IP and Port) from launch arguments
    # Note: These values can still be overridden via CLI
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

    # Robot Controller Node (formerly plc_bridge_node)
    # This node converts (v, omega) to (v, phi) for the Hand Lift
    plc_bridge_node = Node(
        package='carryall_controller',
        executable='plc_bridge_node',
        name='motor_controller_node',
        output='screen',
        parameters=[
            LaunchConfiguration('config_file'),
            {
                'use_mock': LaunchConfiguration('use_mock'),
                'plc_ip': LaunchConfiguration('plc_ip'),
                'plc_port': LaunchConfiguration('plc_port'),
            }
        ]
    )
    
    # Odometry Publisher Node
    # This node reads encoder and potentiometer from FX5U and publishes odom
    odom_publisher_node = Node(
        package='carryall_controller',
        executable='odom_publisher',
        name='odom_publisher',
        output='screen',
        parameters=[
            LaunchConfiguration('config_file'),
            {
                'use_mock': LaunchConfiguration('use_mock'),
                'plc_ip': LaunchConfiguration('plc_ip'),
                'plc_port': LaunchConfiguration('plc_port'),
            }
        ]
    )
    
    return LaunchDescription([
        use_mock_arg,
        config_file_arg,
        plc_ip_arg,
        plc_port_arg,
        plc_bridge_node,
        odom_publisher_node,
    ])
