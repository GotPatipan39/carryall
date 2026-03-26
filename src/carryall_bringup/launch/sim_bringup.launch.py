"""
Simulation bringup launch file for CarryAll AGV
Combines Gazebo simulation with navigation stack for testing without hardware
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Launch arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    world = LaunchConfiguration('world', default='warehouse.sdf')
    use_nav2 = LaunchConfiguration('use_nav2', default='false')
    
    # Include Gazebo simulation
    gazebo_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('carryall_description'),
                'launch',
                'gazebo.launch.py'
            ])
        ]),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'world': world,
        }.items()
    )
    
    # Teleop node for manual control (keyboard)
    teleop_node = Node(
        package='teleop_twist_keyboard',
        executable='teleop_twist_keyboard',
        name='teleop_twist_keyboard',
        output='screen',
        prefix='xterm -e',
        remappings=[
            ('/cmd_vel', '/cmd_vel'),
        ],
        parameters=[{
            'scale_linear': 0.5,
            'scale_angular': 0.5,
        }]
    )
    
    # Twist mux (optional - to handle multiple cmd_vel sources)
    # Uncomment if you want to use twist_mux
    # twist_mux = Node(
    #     package='twist_mux',
    #     executable='twist_mux',
    #     name='twist_mux',
    #     output='screen',
    #     parameters=[{
    #         'topics': {
    #             'navigation': {'topic': 'nav_cmd_vel', 'timeout': 0.5, 'priority': 10},
    #             'teleop': {'topic': 'cmd_vel', 'timeout': 0.5, 'priority': 100},
    #         },
    #         'locks': {},
    #         'publisher': 'cmd_vel_out',
    #     }],
    #     remappings=[
    #         ('/cmd_vel_out', '/cmd_vel'),
    #     ]
    # )
    
    # Include Nav2 navigation (optional)
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('carryall_navigation'),
                'launch',
                'nav2.launch.py'
            ])
        ]),
        condition=None,  # Add condition if needed
        launch_arguments={
            'use_sim_time': use_sim_time,
        }.items()
    )
    
    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='true',
            description='Use simulation (Gazebo) clock'
        ),
        DeclareLaunchArgument(
            'world',
            default_value='warehouse.sdf',
            description='Gazebo world file'
        ),
        DeclareLaunchArgument(
            'use_nav2',
            default_value='false',
            description='Start Nav2 navigation stack'
        ),
        DeclareLaunchArgument(
            'use_teleop',
            default_value='true',
            description='Start teleop for manual control'
        ),
        gazebo_sim,
        # Include teleop if requested (conditional)
        # You can add conditional logic here
    ])
