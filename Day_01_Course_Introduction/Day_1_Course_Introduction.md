# Day 1: Course Introduction

In this class, we were been mainly discussing about the structure of the course.
You will get more information from the following video and Slides

## Video of Lecture

Click on the following image to see the video

[![Introduction Video](https://img.youtube.com/vi/hoMf7o6G00U/0.jpg)](https://drive.google.com/file/d/1TxUhUUYLfjq-nq8266qkuv3TVG0Wl-qE/view?usp=sharing)

## Slides

Click on the following image to see the slides

[![Slides](https://img.youtube.com/vi/hoMf7o6G00U/0.jpg)](Class_1_Course_Overview_25_7_2020.pdf)


## Q&A 

1. **Will you provide class notes before the class. This will help us to prepare for the class?**

    Yes, I will provide materials for the class, so that you can have a read and hear my class. This can 
improve overall productivity of the course as well as discussions.

2. **Your books are discussing 16.04/18.04, this course is based on 20.04, so will the code compatible ?**
    
    There will be some compatibility issues in the code, but I am planning to upgrade the code in-order to work with ROS-Noetic
    So you can refer the new code.

3. **Why this course only ROS2 instead of ROS1 and ROS2?**

    I am planning to create knowledge in both the world of ROS. That is ROS1 and ROS2. After 
    learning ROS1, it is very easy to migrate into ROS 2. If you are doing that, then you are learning ROS 1 and ROS2.
    The knowledge in ROS1 will help you to port the code from ROS1 to ROS2
4. **Why ROS Noetic in this course?**

    The ROS Noetic comes with Python 3 by default. The python 2.7 is the default version for remaining distribution.
    The Python 2.7 already end its life in the early 2020. So we have to stick on to Python 3. Noetic will be a good choice for us to 
    work with Python 3 and ROS without any issues. Also it is the last ROS distribution and you will get support upto 2025.

5.  **Which is the best IDE for ROS, Is visual studio for Linux good?**

    Yes, [Visual Studio Code](https://code.visualstudio.com/) ([User Guide](https://code.visualstudio.com/docs/editor/whyvscode)) and its 
    [ROS plugin](https://marketplace.visualstudio.com/items?itemName=ms-iot.vscode-ros) is one of the best way to write ROS code. 
    You can also use plain text editors like vim or nano. Using an IDE is not mandatory, but it will make our life easy by various features like 
    automatic suggestions of APIs, synatax error detection etc.

6. **Which langauge are we planning to use in this course, C++ or Python?**

    We are planning to use C++ in most of the course. There are lot of advantages in C++ compared to Python.
    All ROS APIs are not exposed to Python but C++ is fully compatible with all ROS APIs. We will also discuss Python, we can do
    basic scripting and automation using Python script
7. **Is it possible to install two version of ROS in one system?**

    There are few versions of ROS can install on same Ubuntu OS. The compatibility of the OS is mentioned in the ROS installation page.
    You can find whether the ROS distro is compatible with the existing OS. I will only prefer to use one distro in one OS. It will avoid crashes due the dependencies

8. **Issues when working with real robot, pausing of robot movement, why is it happening?**

    There is a method for configuring ROS for multiple machines meaning all the machines will work under a single master.
    It is called the ROS Network setup, you can use that tutorial to configure your robot to work with this scenerio. You can open Rviz and visualize the
    sensor data in the multiple machine setup. The pause of the robot may be because of ROS controller configuration.
9. **There is a change in class projects, is there any class projects now?**

    Yes, we have class projects, not assignments meaning you will be given sample template code and you can play with the code. Based on the template code, you can
    work on your own projects. So the codes discussed in class can be indirectly use for your projects.
10. **Can you give good suggestions for ROS project which can follow?**

    Yes, there are lot of good projects available. One of the project is [PlotJuggler](https://www.plotjuggler.io/ "PlotJuggler").

11. **Are we planning for Git Team?**

    Yes, I have to check more about it. When we start doing projects, we can decide whether we have to use Git Team or so

12. **Oracle Virtualbox or VMWare for this course?**

    I will prefer VMWare because of its improved graphics capabilties. We may need good graphics acceleration in doing ROS simulations.

13. **Can we write tutorial on mother tongue too?**

    The better option is writting in english and try a google translate to mother tongue to ensure that the translation is good. If it is good, then go for english, rest of the job will be done by google translate.
 


    




