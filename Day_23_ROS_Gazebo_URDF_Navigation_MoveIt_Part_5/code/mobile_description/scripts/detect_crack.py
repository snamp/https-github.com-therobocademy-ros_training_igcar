#!/usr/bin/env python
from __future__ import print_function

import sys
import rospy
import cv2
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

import numpy as np  


class image_converter:

  def __init__(self):

    self.bridge = CvBridge()
    self.image_sub = rospy.Subscriber("/camera/image_raw",Image,self.callback)

  def callback(self,data):
    try:
      cv_image = self.bridge.imgmsg_to_cv2(data, "bgr8")
    except CvBridgeError as e:
      print(e)


    hsv = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV) 
    lower_red = np.array([0, 0, 0]) 
    upper_red = np.array([0, 0, 255]) 
    mask = cv2.inRange(hsv, lower_red, upper_red) 

    res = cv2.bitwise_and(cv_image,cv_image, mask= mask) 


    # calculate moments of binary image
    M = cv2.moments(mask)

    # calculate x,y coordinate of center
    cX = int(M["m10"] / M["m00"])
    cY = int(M["m01"] / M["m00"])
    print (cX,cY)

    # put text and highlight the center
    cv2.circle(cv_image, (cX, cY), 5, (255, 255, 255), -1)
    cv2.putText(cv_image, "Corrosion Detection", (cX - 25, cY - 25),cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
   

    cv2.imshow('frame',cv_image) 
    cv2.imshow('mask',mask) 
    cv2.imshow('res',res) 
  




    #(rows,cols,channels) = cv_image.shape
    #if cols > 60 and rows > 60 :
    #  cv2.circle(cv_image, (50,50), 10, 255)

    #cv2.imshow("Image window", cv_image)
    cv2.waitKey(3)


def main(args):
  ic = image_converter()
  rospy.init_node('image_converter', anonymous=True)
  try:
    rospy.spin()
  except KeyboardInterrupt:
    print("Shutting down")
  cv2.destroyAllWindows()

if __name__ == '__main__':
    main(sys.argv)
