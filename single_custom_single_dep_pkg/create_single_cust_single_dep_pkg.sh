#!/bin/bash

# Source the configuration file
source config.sh

# Source the workspace
source /opt/ros/$ROS_DISTRO/setup.bash

# Create the package
echo "Creating ROS 2 package: $PACKAGE_NAME"
cd $DESTINATION_DIR
ros2 pkg create --build-type ament_cmake $PACKAGE_NAME

# Create the 'msg' folder
echo "Creating 'msg' folder"
cd $DESTINATION_DIR/$PACKAGE_NAME
mkdir msg

# Update the 'CustomMessage.msg' file with the specified contents
echo "$CUSTOM_MESSAGE" > msg/CustomMessage.msg

# Update the CMakeLists.txt file
echo "Updating 'CMakeLists.txt'"
for pkg in "${DEPENDENCY_PKGS[@]}"; do
    echo "Adding dependency: $pkg"
    sed -i "/ament_package/a find_package($pkg REQUIRED)" CMakeLists.txt
done

sed -i "/find_package(ament_cmake REQUIRED)/a find_package(rosidl_default_generators REQUIRED)" CMakeLists.txt

# Add rosidl_generate_interfaces command
echo "rosidl_generate_interfaces(\${PROJECT_NAME}
  \"msg/CustomMessage.msg\"
  DEPENDENCIES
    ${DEPENDENCY_PKGS[*]}
)" >> CMakeLists.txt

# Move ament_package() to the end of the file
sed -i '/ament_package/d' CMakeLists.txt
echo "ament_package()" >> CMakeLists.txt

# Update the package.xml file
echo "Updating 'package.xml'"
for pkg in "${DEPENDENCY_PKGS[@]}"; do
    echo "Adding dependency: $pkg"
    sed -i "/<\/package>/i    <depend>$pkg<\/depend>" package.xml
done
sed -i "/<\/package>/i    <buildtool_depend>rosidl_default_generators<\/buildtool_depend>" package.xml
sed -i "/<\/package>/i    <exec_depend>rosidl_default_runtime<\/exec_depend>" package.xml
sed -i "/<\/package>/i    <member_of_group>rosidl_interface_packages<\/member_of_group>" package.xml




# Build the package
echo "Building the package"
cd $WORKSPACE_PATH
colcon build

# Source the setup file
echo "Sourcing the setup file"
source $WORKSPACE_PATH/install/setup.bash

echo "Package creation complete!"

# Print the list of dependency packages
echo "Dependency packages: ${DEPENDENCY_PKGS[@]}"
