#!/bin/bash

# Configuration variables
WORKSPACE_NAME="custom_msg_test_ws"
ROS_DISTRO="galactic"
WORKSPACE_PATH="$PWD/${WORKSPACE_NAME}"
PACKAGE_NAME="single_custom_multi_dep_pkg_test"
DESTINATION_DIR="${WORKSPACE_PATH}/src"


# Custom message definition
CUSTOM_MESSAGE="
# Custom message definition
geometry_msgs/Point center
sensor_msgs/BatteryState batter_info
"
DEPENDENCY_PKGS=("std_msgs" "sensor_msgs" "geometry_msgs")