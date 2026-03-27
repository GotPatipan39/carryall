# CarryAll - Handheld Mapping Launch File
# ใช้สร้างแผนที่โดยแบก LiDAR เดินวนรอบ ไม่ต้องใช้ตัวรถ ไม่ต้องมี PLC
# วิธีใช้: ros2 launch carryall_navigation handheld_mapping.launch.py

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    pkg_navigation = get_package_share_directory('carryall_navigation')

    # 1. Static TF: map -> odom (จำลอง odom จาก map เพราะไม่มีล้อ)
    static_tf_map_odom = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_tf_map_odom',
        output='screen',
        arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom']
    )

    # 2. Static TF: odom -> base_link (ไม่มี Odometry จาก Encoder ชั่วคราว)
    static_tf_odom_base = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_tf_odom_base',
        output='screen',
        arguments=['0', '0', '0', '0', '0', '0', 'odom', 'base_link']
    )

    # 3. Static TF: base_link -> lidar_link (ตำแหน่ง LiDAR บนตัวหุ่น)
    #    ค่า xyz = offset ในเมตร (ไปข้างหน้า 0.2m, สูง 0.3m จาก base_link)
    static_tf_base_lidar = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_tf_base_lidar',
        output='screen',
        arguments=['0.2', '0', '0.3', '0', '0', '0', 'base_link', 'lidar_link']
    )

    # 4. Hinson LiDAR Driver
    start_lidar = Node(
        package='hins_le_ros2',
        executable='hins_le_ros2_node',
        name='hins_le_ros2_node',
        output='screen',
        emulate_tty=True,
        parameters=[{
            'frame_id': 'lidar_link',
            'change_param': True,
            'laser_ip': '192.168.1.88',
            'laser_port': 8080,
            'measure_frequency_kHz': '200',
            'motor_speed': '30',
            'point_sampling': '2',
            'filter_level': '2',
            'shadows_filter_level': 1,
            'shadows_filter_max_angle': 175.0,
            'shadows_filter_min_angle': 5.0,
            'shadows_filter_neighbors': 1,
            'shadows_filter_window': 5,
            'shadows_traverse_step': 1,
            'min_angle': 0.0,
            'max_angle': 361.0,
            'use_udp': False
        }]
    )

    # 5. SLAM Toolbox (Async mode - ทน Handheld ได้ดีกว่า Sync)
    start_slam = Node(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[
            os.path.join(pkg_navigation, 'params', 'slam_toolbox_params.yaml'),
            {'use_sim_time': False}
        ]
    )

    # 6. Foxglove Bridge (ดูแผนที่ผ่าน Browser จากเครื่องอื่นได้เลย)
    #    เปิด https://app.foxglove.dev แล้ว connect ws://<IP_MiniPC>:8765
    start_foxglove = Node(
        package='foxglove_bridge',
        executable='foxglove_bridge',
        name='foxglove_bridge',
        output='screen',
        parameters=[{
            'port': 8765,
            'address': '0.0.0.0',
            'tls': False,
            'certfile': '',
            'keyfile': '',
            'topic_whitelist': ['.*'],
            'send_buffer_limit': 10000000,
        }]
    )

    return LaunchDescription([
        static_tf_map_odom,
        static_tf_odom_base,
        static_tf_base_lidar,
        start_lidar,
        start_slam,
        start_foxglove,
    ])
