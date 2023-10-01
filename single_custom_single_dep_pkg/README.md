### Run below command in terminal to creat ROS2 WORKSPACE
./create_ros2_workpace.sh 


### Run below command in terminal to create a new ros2 custom pkg
./create_single_cust_single_dep_pkg.sh 


### To verify whether custom pkg is created or not, run below command inside WORKSPACE.
```
1. source install/setup.bash

2. ros2 interface show single_custom_single_dep_pkg_test/msg/CustomMessage
```

### Which gives below output
```
#Custom message definition
geometry_msgs/Point center
        float64 x
        float64 y
        float64 z
float64 radius
```