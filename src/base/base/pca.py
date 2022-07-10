import rclpy
from rclpy.node import Node

from std_msgs.msg import UInt16

import Adafruit_PCA9685

class PCA(Node):
    def __init__(self):
        super().__init__('PCA')
        self.pca = Adafruit_PCA9685.PCA9685(address=0x40, busnum=1)
        self.pca.set_pwm_freq(60)
        queue = 1
        
        self.pca0 = self.create_subscription(UInt16, 'pca0',self.call0,queue)
        self.pca1 = self.create_subscription(UInt16, 'pca1',self.call1,queue)
        self.pca2 = self.create_subscription(UInt16, 'pca2',self.call2,queue)
        self.pca3 = self.create_subscription(UInt16, 'pca3',self.call3,queue)
        self.pca4 = self.create_subscription(UInt16, 'pca4',self.call4,queue)
        self.pca5 = self.create_subscription(UInt16, 'pca5',self.call5,queue)
        self.pca6 = self.create_subscription(UInt16, 'pca6',self.call6,queue)
        self.pca7 = self.create_subscription(UInt16, 'pca7',self.call7,queue)
        self.pca8 = self.create_subscription(UInt16, 'pca8',self.call8,queue)
        self.pca9 = self.create_subscription(UInt16, 'pca9',self.call9,queue)
        self.pca10 = self.create_subscription(UInt16, 'pca10',self.call10,queue)
        self.pca11 = self.create_subscription(UInt16, 'pca11',self.call11,queue)
        self.pca12 = self.create_subscription(UInt16, 'pca12',self.call12,queue)
        self.pca13 = self.create_subscription(UInt16, 'pca13',self.call13,queue)
        self.pca14 = self.create_subscription(UInt16, 'pca14',self.call14,queue)
        self.pca15 = self.create_subscription(UInt16, 'pca15',self.call15,queue)

    def call0(self, pulse):
        self.call(0,pulse)
    def call1(self, pulse):
        self.call(1,pulse)
    def call2(self, pulse):
        self.call(2,pulse)
    def call3(self, pulse):
        self.call(3,pulse)
    def call4(self, pulse):
        self.call(4,pulse)
    def call5(self, pulse):
        self.call(5,pulse)
    def call6(self, pulse):
        self.call(6,pulse)
    def call7(self, pulse):
        self.call(7,pulse)
    def call8(self, pulse):
        self.call(8,pulse)
    def call9(self, pulse):
        self.call(9,pulse)
    def call10(self, pulse):
        self.call(10,pulse)
    def call11(self, pulse):
        self.call(11,pulse)
    def call12(self, pulse):
        self.call(12,pulse)
    def call13(self, pulse):
        self.call(13,pulse)
    def call14(self, pulse):
        self.call(14,pulse)
    def call15(self, pulse):
        self.call(15,pulse)
    
    
    def call(self, channel, pulse):
        self.get_logger().info("Channel "+str(channel)+" received: "+str(pulse.data))
        self.pca.set_pwm(channel,0,pulse.data)

def main(args=None):
    rclpy.init(args=args)
    pca = PCA()
    rclpy.spin(pca)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    pca.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()