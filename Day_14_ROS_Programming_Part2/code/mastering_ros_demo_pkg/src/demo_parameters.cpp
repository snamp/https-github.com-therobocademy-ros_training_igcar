/*
 * Copyright (C) 2015, Lentin Joseph and Qbotics Labs Inc.
 * Email id : qboticslabs@gmail.com
 *
 * Copyright (C) 2017, Jonathan Cacace.
 * Email id : jonathan.cacace@gmail.com
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the names of Stanford University or Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.


* This code will subscriber integer values from demo_topic_publisher

*/


#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <iostream>



int main(int argc, char **argv)
{

	//Initializing ROS node with a name of demo_topic_subscriber
	ros::init(argc, argv,"demo_parameter_node");
	//Created a nodehandle object
	ros::NodeHandle node_obj;


	 //Getting a parameter
     std::string s;
     node_obj.param<std::string>("my_string_param", s, "Hello");
	 
	 ROS_INFO("Got parameter value %s:",s.c_str());

	 //Setting  a parameter
     node_obj.setParam("my_string_param", "Hello there");

     node_obj.param<std::string>("my_string_param", s, "Hello");

	 ROS_INFO("Got parameter after setting a new value %s:",s.c_str());
	 
	 //Deleting parameter
  	 node_obj.deleteParam("my_string_param");

	 if (!node_obj.hasParam("my_string_param"))
  	{
    	ROS_INFO("No param named 'my_string_param'");
  	}  

	//Spinning the node
	ros::spin();
	return 0;
}


