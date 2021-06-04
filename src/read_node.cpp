/*
 * read_node.cpp
 *
 *  Created on: Aug 7, 2014
 *      Author: Péter Fankhauser
 *   Institute: ETH Zurich, Autonomous Systems Lab
 */

#include "Read.hpp"

#include <ros/ros.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "read");
  ros::NodeHandle nodeHandle("~");

  point_cloud_io::Read read(nodeHandle);

  ros::spin();
  return 0;
}
