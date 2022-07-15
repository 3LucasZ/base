
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='base',
            node_executable='pca',
            node_name='pca'
         ),
        Node(
            package='base',
            node_executable='drivetrain',
            node_name='drivetrain'
        ),
    ])
