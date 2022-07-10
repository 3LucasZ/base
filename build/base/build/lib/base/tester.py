import rclpy
from rclpy.node import Node

from std_msgs.msg import UInt16


class Tester(Node):

    def __init__(self):
        super().__init__('tester')

        self.servoPub = self.create_publisher(UInt16, 'pca0', 10)
        servoWait = 3
        self.servoTimer = self.create_timer(servoWait, self.servoCall)
        self.angle = 150

    def servoCall(self):
        msg = UInt16()
        msg.data = self.angle
        self.servoPub.publish(msg)
        self.get_logger().info('Sent pulse '+str(self.angle)+' to servo')
        self.angle = (self.angle%600)+150


def main(args=None):
    rclpy.init(args=args)

    tester = Tester()

    rclpy.spin(tester)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    tester.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
