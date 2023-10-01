#!/bin/bash

# Source the configuration file
source config.sh


# Create the workspace directory

mkdir -p $WORKSPACE_PATH/src

# Navigate to the workspace
cd $WORKSPACE_PATH

# Initialize the workspace
rosdep init
rosdep update
source /opt/ros/$ROS_DISTRO/setup.bash
rosdep install --from-paths src --ignore-src -r -y

# Build the workspace
colcon build

# Source the workspace
source $WORKSPACE_PATH/install/setup.bash

echo "ROS 2 workspace created successfully."
