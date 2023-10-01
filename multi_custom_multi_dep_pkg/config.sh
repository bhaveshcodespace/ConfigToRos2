#!/bin/bash

# Configuration variables
WORKSPACE_NAME="multi_custom_msg_test_ws"
ROS_DISTRO="galactic"
WORKSPACE_PATH="$PWD/${WORKSPACE_NAME}"
PACKAGE_NAME="multi_custom_multi_dep_pkg_test"
DESTINATION_DIR="${WORKSPACE_PATH}/src"


# Custom message definition
CUSTOM_MESSAGES=(
"
# Custommessagedefinition1
int32 num
string message
sensor_msgs/Imu imu_data
"
"
# Custommessagedefinition2
float64 x
float64 y
float64 z
geometry_msgs/PointStamped point_data
"
)
DEPENDENCY_PKGS=("std_msgs" "sensor_msgs" "geometry_msgs")