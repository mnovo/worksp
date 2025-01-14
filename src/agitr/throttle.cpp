// This program generates a single log message at each
// severity level.
#include <ros/ros.h>

int main(int argc, char **argv) {
  // Initialize the ROS system and become a node.
  ros::init(argc, argv, "count_and_log");
  ros::NodeHandle nh;

  while(ros::ok()) {
    ROS_DEBUG_STREAM_THROTTLE(0.1, "This appears every 0.1 seconds.");
    ROS_INFO_STREAM_THROTTLE(0.3, "This appears every 0.3 seconds.");
    ROS_WARN_STREAM_THROTTLE(0.5, "This appears every 0.5 seconds.");
    ROS_ERROR_STREAM_THROTTLE(1.0, "This appears every 1.0 seconds.");
    ROS_FATAL_STREAM_THROTTLE(2.0, "This appears every 2.0 seconds.");
  }
}
