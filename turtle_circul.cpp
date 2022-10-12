#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
int main(int argc,char **argv)
{        ros::init(argc,argv,"haigui");
         ros::NodeHandle n;
         ros::Publisher turtle_vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel",10);
         ros::Rate loop_rate(10);
         while(ros::ok())
         {     geometry_msgs::Twist vel_msg;
               vel_msg.linear.x = 1;
               vel_msg.angular.z = 1;
               turtle_vel_pub.publish(vel_msg);
               ROS_INFO("turtle is running");
               loop_rate.sleep();
         }
         return 0;
}

