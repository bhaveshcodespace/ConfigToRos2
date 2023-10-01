#!/bin/bash

# Source the configuration file
source config.sh

# Source the workspace
source /opt/ros/$ROS_DISTRO/setup.bash

# Create the package
echo "Creating ROS 2 package: $PACKAGE_NAME"
cd $DESTINATION_DIR
ros2 pkg create --build-type ament_python $PACKAGE_NAME

# Build the package
echo "Building the package"
cd $WORKSPACE_PATH
colcon build

# Source the setup file
echo "Sourcing the setup file"
source $WORKSPACE_PATH/install/setup.bash

echo "Package creation complete!"
