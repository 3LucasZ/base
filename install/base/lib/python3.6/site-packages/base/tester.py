import rclpy
from rclpy.node import Node

from std_msgs.msg import UInt16
from interfaces.msg import Vector2


class Tester(Node):

    def __init__(self):
        super().__init__('tester')
        queue = 1

        self.servoPub = self.create_publisher(UInt16, 'pca0', queue)
        servoWait = 3
        self.servoTimer = self.create_timer(servoWait, self.servoCall)
        self.angle = 150

        self.motorsPub = self.create_publisher(Vector2, 'motors', queue)
        motorsWait = 4
        self.motorsTimer = self.create_timer(motorsWait, self.motorsCall)
        self.left = 60
        self.right = 60


    def servoCall(self):
        msg = UInt16()
        msg.data = self.angle
        self.servoPub.publish(msg)
        self.get_logger().info('Sent pulse '+str(self.angle)+' to servo')
        self.angle = (self.angle%600)+150

    def motorsCall(self):
        msg = Vector2()
        msg.x=self.left
        msg.y=self.right
        self.motorsPub.publish(msg)
        self.get_logger().info('Sent speed ['+str(self.left)+", "+str(self.right)+"] to motors")
        self.left *= -1
        self.right *= -1
    
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
