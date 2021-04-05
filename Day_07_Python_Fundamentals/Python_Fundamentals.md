# Python Fundamentals

In this class, we are planning to discuss the fundamental concepts of Python, which is 
required to work with ROS. First we can start with answering two questions.

1. **What is Python and why we need Python for working with ROS?**

Ans: [Python](https://www.python.org/) is an interpreted, high-level, general-purpose programming language. Created by [Guido van Rossum](https://gvanrossum.github.io/) and first released in 1991.
We can use Python for programming robots using ROS. The [rospy](http://wiki.ros.org/rospy) python module in ROS helps to create ROS programs using Python.

2. **What is the level of expertise in Python you require to work with ROS?**

Ans: You should know fundamentals of Python especially Function and Class. Similar to C++ concept, you should be aware of OOPs concepts with Python.

## Video of Lecture

Click on the following image to see the video

[![Python Fundamentals](https://img.youtube.com/vi/IXtGRSYJ_uA/0.jpg)](https://drive.google.com/file/d/1w746fileQujOjdWzz9eBVfJaYxvCvuJ4/view?usp=sharing)

## Q&A 

[Q&A section in the video](https://www.youtube.com/watch?v=IXtGRSYJ_uA)



# Download Python

[**Official Python website**](https://www.python.org/)

Python is available for Windows, Linux/UNIX and Mac OSX etc

[**Download Python**](https://www.python.org/downloads/)

## How Python works?

![How Python works](https://i.imgur.com/PJME67T.png)

[Read More](https://indianpythonista.wordpress.com/2018/01/04/how-python-runs/)

## History of Python

* Python was introduced by [Guido Van Rossum](https://en.wikipedia.org/wiki/Guido_van_Rossum) in 1989.
* [ABC programming langauge](https://homepages.cwi.nl/~steven/abc/):Major influence that led to design adn development of Python
* **Story behind the name**: Back in the 1970s, there was a popular BBC comedy tv show called Monty Python’s Fly Circus and Van Rossum happened to be the big fan of that show. So when Python was developed, Rossum named the project ‘Python’.

![Time line](http://www.trytoprogram.com/images/pythonhistory.jpg)
* Latest version: Python 3.8.5

[Read More: Source1](http://www.trytoprogram.com/python-programming/history-of-python/)

[Read More: Source2](https://www.geeksforgeeks.org/history-of-python/)


## Tutorials: Fundamentals of Python

Python version we are using is Python 3.x

* [Python 3 Tutorials: Tutorial point](https://www.tutorialspoint.com/python3/index.htm)
* [Python 3 tutorials: W3schools](https://www.w3schools.com/python/default.asp)
* [Python 3 basics](https://www.learnpython.org/)
* [Python 3 basics-GeeksforGeeks](https://www.geeksforgeeks.org/python-3-basics/)

## Tutorials: Difference between Python 2.x vs Python 3.x

* [Python 2.x vs Python 3](https://www.geeksforgeeks.org/important-differences-between-python-2-x-and-python-3-x-with-examples/)
* [Python 2.x vs Python 3: Guru99](https://www.guru99.com/python-2-vs-python-3.html)


## Python Coding Style

* [Google Python Coding Style](https://google.github.io/styleguide/pyguide.html)

## Python Cheat Sheet

1. [Download Cheat Sheet 1](reference/cheat_sheet_reference.pdf)
2. [Download Cheat Sheet 2](reference/python_cheat_sheet.pdf)
2. [Cheat Sheet 1](https://github.com/crazyguitar/pysheeet)
3. [Cheat Sheet 2](https://github.com/yungnickyoung/Python-3-Cheatsheet)
4. [Cheat Sheet 3](https://github.com/wilfredinni/python-cheatsheet)


## PEP(Python Enhancement Proposal)

PEP stands for Python Enhancement Proposal. A PEP is a design document providing information to the Python community, or describing a new feature for Python or its processes or environment. The PEP should provide a concise technical specification of the feature and a rationale for the feature.

* [Reference1](https://www.python.org/dev/peps/)
* [Reference 2](https://www.python.org/dev/peps/pep-0001/)

## Hand-on Tutorial 

Reference: [Chapter 3-ROS for Absolute Beginners](reference/Python_Fundamentals.pdf)

[Code reference](https://github.com/therobocademy/ROS_Learning_Path_A/tree/master/Class_Notes/Day7_Python_Fundamentals/code)

1. **Basics of Python**
2. **OOPs concepts in Python**
3. **Python and files**
4. **Python modules**
5. **rospy and Python**

Sample code

```
#!/usr/bin/env python

#Python modules
import rospy
from std_msgs.msg import String

#Python function
def talker():

    #Python class and objects
    pub = rospy.Publisher('chatter', String, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    
    while not rospy.is_shutdown():
        hello_str = "hello world %s" % rospy.get_time()
        rospy.loginfo(hello_str)
        pub.publish(hello_str)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass

```
