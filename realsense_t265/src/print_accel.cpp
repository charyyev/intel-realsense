#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/Imu.h"


void Callback(const sensor_msgs::Imu::ConstPtr& msg)
{
  ROS_INFO("Imu Acceleration x: [%f], y: [%f], z: [%f]", msg->linear_acceleration.x,msg->linear_acceleration.y, msg->linear_acceleration.z);
}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  
  ros::Subscriber sub = n.subscribe("/camera/accel/sample", 1000, Callback);

  ros::spin();

  return 0;
}
