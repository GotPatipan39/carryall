"""
Main robot bringup launch file for CarryAll AGV
Starts all necessary nodes for robot operation
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Launch arguments
    use_mock_arg = DeclareLaunchArgument(
        'use_mock',
        default_value='false',
        description='Use mock PLC for development without hardware'
    )
    
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time'
    )
    
    # Get URDF
    urdf_file = PathJoinSubstitution([
        FindPackageShare('carryall_description'),
        'urdf',
        'carryall.urdf.xacro'
    ])
    
    robot_description_content = Command([
        PathJoinSubstitution([FindExecutable(name='xacro')]),
        ' ',
        urdf_file
    ])
    
    # Robot State Publisher
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description_content,
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # Include controller launch
    controller_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('carryall_controller'),
                'launch',
                'controller.launch.py'
            ])
        ]),
        launch_arguments={
            'use_mock': LaunchConfiguration('use_mock')
        }.items()
    )
    
    return LaunchDescription([
        use_mock_arg,
        use_sim_time_arg,
        robot_state_publisher_node,
        controller_launch,
    ])
