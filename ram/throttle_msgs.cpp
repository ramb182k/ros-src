#include <ros/ros.h>
int main(int argc, char **argv)
{
ros::init(argc, argv, "count_and_log");
ros::NodeHandle nh;
ros::Rate rate(10);
for(int i = 1; ros::ok();i++)
{
ROS_DEBUG_STREAM_THROTTLE(4,"Counted to " << i);
if((i%3)==0){
ROS_INFO_STREAM_THROTTLE(4,i << " is divisible by 3.");
}
if((i%5)==0)
{
ROS_WARN_STREAM_THROTTLE(4,i << " is divisible by 5.");
}
if((i%10)==0)
{
ROS_ERROR_STREAM_THROTTLE(4,i << " is divisible by 10.");
}
if((i%20)==0)
{
ROS_FATAL_STREAM_THROTTLE(4,i << " is divisible by 20.");
}
rate.sleep();
}
}
