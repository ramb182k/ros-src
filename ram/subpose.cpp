
// This program s u b s c r i b e s to t u r t l e 1 /pose and shows i t s
// messages on the screen .
#include <ros/ros.h>
#include <turtlesim/Pose.h>
#include <iomanip>

// A c a l l b a c k function . Executed each time a new pose
// message a r r i v e s .
void poseMessageReceived(const turtlesim::Pose& msg) {
ROS_INFO_STREAM(std::setprecision(2) <<std::fixed
<< " position=(" <<msg.x<< " , " <<msg.y<< " ) "
<< " direction=" <<msg.theta) ;
}
int main (int argc ,char **argv) {
ros::init(argc, argv,"subscribe_to_pose");
ros::NodeHandle nh;
ros::Subscriber sub=nh.subscribe("turtle1/pose", 1000,
&poseMessageReceived) ;
ros::spin();
}
