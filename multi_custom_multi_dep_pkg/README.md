### Run below command in terminal to creat ROS2 WORKSPACE
./create_ros2_workpace.sh 


### Run below command in terminal to create a new ros2 custom pkg
./create_multi_cust_multi_dep_pkg.sh 

### To verify whether custom pkg is created or not, run below command inside WORKSPACE.
```
1. source install/setup.bash
2. ros2 interface show multi_custom_multi_dep_pkg_test/msg/CustomMessage0
```


### Which gives below output
```
# Custommessagedefinition1
int32 num
string message
sensor_msgs/Imu imu_data
        #
        #
        #
        std_msgs/Header header
                builtin_interfaces/Time stamp
                        int32 sec
                        uint32 nanosec
                string frame_id
        geometry_msgs/Quaternion orientation
                float64 x 0
                float64 y 0
                float64 z 0
                float64 w 1
        float64[9] orientation_covariance
        geometry_msgs/Vector3 angular_velocity
                float64 x
                float64 y
                float64 z
        float64[9] angular_velocity_covariance
        geometry_msgs/Vector3 linear_acceleration
                float64 x
                float64 y
                float64 z
        float64[9] linear_acceleration_covariance
```
### To verify another msg run below command
```
1. source install/setup.bash

2. ros2 interface show multi_custom_multi_dep_pkg_test/msg/CustomMessage1
```

### Which gives below output
```
# Custommessagedefinition2
float64 x
float64 y
float64 z
geometry_msgs/PointStamped point_data
        std_msgs/Header header
                builtin_interfaces/Time stamp
                        int32 sec
                        uint32 nanosec
                string frame_id
        Point point
                float64 x
                float64 y
                float64 z
```


