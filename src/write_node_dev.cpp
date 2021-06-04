/*
 * write_node.cpp
 *
 *  Created on: Nov 13, 2015
 *      Author: Remo Diethelm
 *   Institute: ETH Zurich, Autonomous Systems Lab
 */

#include "Write.hpp"

#include <ros/ros.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "write");
  ros::NodeHandle nodeHandle("~");

  point_cloud_io::Write write(nodeHandle);

  ros::spin();
  return 0;
}
