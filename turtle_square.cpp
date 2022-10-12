#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#define pi 3.141592653589
int main(int argc,char **argv)
{        ros::init(argc,argv,"haigui");
         ros::NodeHandle n;
         ros::Publisher turtle_vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel",4);
         ros::Rate loop_rate(2);
         geometry_msgs::Twist vel_msg;
         int count=0;
         while(ros::ok())
         {     vel_msg.linear.x = 1;
               vel_msg.angular.z = 0;
               count++;
               turtle_vel_pub.publish(vel_msg);
               ROS_INFO("turtle is running");
               loop_rate.sleep();
         
         while(count==5)
         {     count=0;
               vel_msg.angular.z = pi;
               turtle_vel_pub.publish(vel_msg);
               ROS_INFO("turtle is turning");
         }
         loop_rate.sleep();
         }
         return 0;
}

