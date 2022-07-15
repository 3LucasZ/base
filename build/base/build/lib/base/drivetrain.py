import rclpy
from rclpy.node import Node

from std_msgs.msg import UInt16
from interfaces.msg import Vector2

import time

class Drivetrain(Node):
    LOW = 0
    HIGH = 0xfff
    LOWmsg = UInt16()
    LOWmsg.data=LOW
    HIGHmsg = UInt16()
    HIGHmsg.data=HIGH

    def __init__(self):
        super().__init__('drivetrain')
        LS = 8
        LF = 9
        LB = 10

        RB = 11
        RF = 12
        RS = 13

        queue = 1

        self.motorsSub = self.create_subscription(Vector2, 'motors',self.call,queue)
    
        self.LSpub = self.create_publisher(UInt16, 'pca'+str(LS), queue)
        self.LFpub = self.create_publisher(UInt16, 'pca'+str(LF), queue)
        self.LBpub = self.create_publisher(UInt16, 'pca'+str(LB), queue)
        
        self.RBpub = self.create_publisher(UInt16, 'pca'+str(RB), queue)
        self.RFpub = self.create_publisher(UInt16, 'pca'+str(RF), queue)
        self.RSpub = self.create_publisher(UInt16, 'pca'+str(RS), queue)
    
    def call(self, msg):
        self.get_logger().info('Received speed ['+str(msg.x)+", "+str(msg.y)+"] to motors")
        self.set_to(msg.x,msg.y)
        
    

    def set_to(self, left, right):
        speed = UInt16()

        if (left > 0):
            self.LBpub.publish(self.LOWmsg)
            self.LFpub.publish(self.HIGHmsg)
        else:
            left *= -1
            self.LFpub.publish(self.LOWmsg)
            self.LBpub.publish(self.HIGHmsg)
            
        if (right > 0):
            self.RBpub.publish(self.HIGHmsg)
            self.RFpub.publish(self.LOWmsg)
        else:
            right *= -1
            self.RFpub.publish(self.HIGHmsg)
            self.RBpub.publish(self.LOWmsg)

        speed.data = left*self.HIGH//100
        self.LSpub.publish(speed)
        speed.data = right*self.HIGH//100
        self.RSpub.publish(speed)

def main(args=None):
    rclpy.init(args=args)

    drivetrain = Drivetrain()

    try:
        rclpy.spin(drivetrain)
    except KeyboardInterrupt:
        print("keyboard interrupted!")
        # Destroy the node explicitly
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)

        drivetrain.set_to(0,0)
        drivetrain.destroy_node()
        rclpy.shutdown()

   


if __name__ == '__main__':
    main()
