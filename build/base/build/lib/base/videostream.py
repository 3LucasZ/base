import rclpy
import cv2
import base64
from rclpy.node import Node
from std_msgs.msg import String

class Videostream(Node):
    cam = cv2.VideoCapture(0)

    def __init__(self):
        super().__init__('videostream')
        self.imagePub = self.create_publisher(String, 'image', 1)
        imageWait = 1
        self.imageTimer = self.create_timer(imageWait, self.imageCall)

    def imageCall(self):
        _, frame = camera.read()
        _, jpg = cv2.imencode('.jpg', frame)
        text = str(base64.b64encode(jpg))
        text = text[2:-1]
        msg = String()
        msg.data = text
        self.imagePub.publish(msg)
        self.get_logger().info('Published image')
    
def main(args=None):
    rclpy.init(args=args)

    videostream = Videostream()

    rclpy.spin(videostream)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    videostream.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
