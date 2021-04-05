cmake_minimum_required(VERSION 2.8.3)
project(mobile_description)

find_package(catkin REQUIRED COMPONENTS
  rospy
  urdf
)
catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)



