# CarryAll Mapping Launch File
# Runs Controller, Odom, LiDAR (stub), and SLAM Toolbox

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    pkg_controller = get_package_share_directory('carryall_controller')
    pkg_navigation = get_package_share_directory('carryall_navigation')
    pkg_description = get_package_share_directory('carryall_description')

    # 1. Start Robot Controller & Odom (from our previous setup)
    start_controller = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_controller, 'launch', 'controller.launch.py')
        )
    )

    # 2. Robot State Publisher (URDF)
    # This is needed for TF base_link -> laser_link
    start_robot_state_publisher = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_description, 'launch', 'robot.launch.py')
        )
    )

    # 3. SLAM Toolbox
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

    # 4. RVIZ2 (Optional but recommended for mapping)
    start_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        # arguments=['-d', os.path.join(pkg_navigation, 'rviz', 'mapping.rviz')], # Add rviz config later
        output='screen'
    )

    return LaunchDescription([
        start_controller,
        start_robot_state_publisher,
        start_slam_toolbox,
        start_rviz
    ])
