#!/bin/bash

# Configuration variables
WORKSPACE_NAME="single_custom_msg_ws"
ROS_DISTRO="galactic"
WORKSPACE_PATH="$PWD/${WORKSPACE_NAME}"
PACKAGE_NAME="single_custom_single_dep_pkg_test"
DESTINATION_DIR="${WORKSPACE_PATH}/src"


# Custom message definition
CUSTOM_MESSAGE="
# Custom message definition
geometry_msgs/Point center
float64 radius
"
DEPENDENCY_PKGS=("geometry_msgs")