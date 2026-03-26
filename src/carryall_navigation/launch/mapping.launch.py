# CarryAll Mapping Launch File
# Runs Controller, Odom, Hinson LiDAR Driver, and SLAM Toolbox

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    pkg_controller = get_package_share_directory('carryall_controller')
    pkg_navigation = get_package_share_directory('carryall_navigation')
    pkg_description = get_package_share_directory('carryall_description')

    # 1. Start Robot Controller & Odom (Mitsubishi FX5U Bridge)
    start_controller = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_controller, 'launch', 'controller.launch.py')
        )
    )

    # 2. Robot State Publisher (URDF Model & Static TFs)
    start_robot_state_publisher = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_description, 'launch', 'robot.launch.py')
        )
    )

    # 3. Hinson LiDAR Driver Node (Verified from your source files)
    start_lidar = Node(
        package='hins_le_ros2',
        executable='hins_le_ros2_node',
        name='hinson_lidar_node',
        output='screen',
        parameters=[{
            'laser_ip': '192.168.1.88',
            'laser_port': 8080,
            'frame_id': 'lidar_link', # Matches URDF sensors.xacro
            'scan_topic': '/scan',
            'measure_frequency_kHz': '200',
            'motor_speed': '30',
            'point_sampling': '2',
            'filter_level': '2',
            'use_udp': False
        }]
    )

    # 4. SLAM Toolbox (Asynchronous Mapping)
    start_slam_toolbox = Node(
        parameters=[
            os.path.join(pkg_navigation, 'params', 'slam_toolbox_params.yaml'),
            {'use_sim_time': False}
        ],
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen'
    )

    # 5. RVIZ2 for visualization
    start_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen'
    )

    return LaunchDescription([
        start_controller,
        start_robot_state_publisher,
        start_lidar,
        start_slam_toolbox,
        start_rviz
    ])
