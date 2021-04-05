# Day 27: Introduction to ROS-OpenCV 

In this class, we will be discussing following topics

1. Introduction to vision opencv package
2. ROS-OpenCV sample code
3. Introduction to opencv_apps 


## Video of the Lecture

[![ROS Perception using OpenCV](https://img.youtube.com/vi/xAF1ZdeEEXQ/0.jpg)](https://drive.google.com/file/d/1QCk_-_EjgVC9tPVCAwsLfhIz4rHurOIM/view?usp=sharing)

## Chapter for ROS Perception reference

* [ROS Perception Chapter reference](chapter_reference/ros_perception.pdf)
* [ROS Nodelet](chapter_reference/nodelet.pdf)

## Installation instruction USB_Cam package

```
# Install usb_cam package
sudo apt install ros-noetic-usb-cam

# Launch usb_cam driver
roslaunch usb_cam usb_cam-test.launch

#Launch sample opencv application
roslaunch cv_bridge_tutorial_pkg demo.launch
```

## Installation instruction of opencv_apps
```
# Install opencv_apps
sudo apt install ros-noetic-opencv-apps
```

## Download the code 

* [Download code](code/)

Copy the ROS package to catkin workspace and do catkin_make command inorder to build the code



# Web Reference

* [ROS Nodelets](http://wiki.ros.org/nodelet/Tutorials)
* [Sample Nodelets](https://github.com/cryborg21/sample_nodelet)
* [ROS Perception](https://github.com/ros-perception)
* [ROS Vision OpenCV](https://github.com/ros-perception/vision_opencv)
* [ROS OpenCV cvbridge](http://wiki.ros.org/cv_bridge)
