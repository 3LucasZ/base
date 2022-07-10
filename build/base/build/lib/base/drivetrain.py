import rclpy
from rclpy.node import Node

from std_msgs.msg import UInt16
from interfaces.msg import Vector2

class Drivetrain(Node):
    def __init__(self):
        super().__init__('drivetrain')
        LS = 8
        LF = 9
        LB = 10

        RB = 11
        RF = 12
        RS = 13

        queue = 10

        self.motorsSub = self.create_subscription(Vector2, 'motors',self.call,queue)
    
        self.LSpub = self.create_publisher(UInt16, 'pca'+LS, queue)
        self.LFpub = self.create_publisher(UInt16, 'pca'+LF, queue)
        self.LBpub = self.create_publisher(UInt16, 'pca'+LB, queue)
        
        self.RBpub = self.create_publisher(UInt16, 'pca'+RB, queue)
        self.RFpub = self.create_publisher(UInt16, 'pca'+RF, queue)
        self.RSpub = self.create_publisher(UInt16, 'pca'+RS, queue)
    
    def call(self, msg):
        self.set_to(msg.x,msg.y)

    def set_to(self, left, right):
        LOW = 0
        HIGH = 4096

        LOWmsg = UInt16()
        LOWmsg.data=LOW
        HIGHmsg = UInt16()
        HIGHmsg.data=HIGH

        speed = UInt16()

        if (left > 0):
            self.LBpub.publish(LOWmsg)
            self.LFpub.publish(HIGHmsg)
        else:
            left *= -1
            self.LFpub.publish(LOWmsg)
            self.LBpub.publish(HIGHmsg)
            
        if (right > 0):
            self.RBpub.publish(LOWmsg)
            self.RFpub.publish(HIGHmsg)
        else:
            left *= -1
            self.RFpub.publish(LOWmsg)
            self.RBpub.publish(HIGHmsg)

        speed.data = left*MAX//100
        self.LSpub.publish(speed)
        speed.data = right*MAX//100
        self.RSpub.publish(speed)

def main(args=None):
    rclpy.init(args=args)

    drivetrain = Drivetrain()

    rclpy.spin(drivetrain)

    set_to(0,0)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    drivetrain.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
