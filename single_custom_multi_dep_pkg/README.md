### Run below command in terminal to creat ROS2 WORKSPACE
./create_ros2_workpace.sh 


### Run below command in terminal to create a new ros2 custom pkg
./create_single_cust_multi_dep_pkg.sh 

### To verify whether custom pkg is created or not, run below command inside WORKSPACE.
```
1. source install/setup.bash

2. ros2 interface show single_custom_multi_dep_pkg_test/msg/CustomMessage

```

### Which gives below output
```
# Custom message definition
geometry_msgs/Point center
        float64 x
        float64 y
        float64 z
sensor_msgs/BatteryState batter_info
        uint8 POWER_SUPPLY_STATUS_UNKNOWN = 0
        uint8 POWER_SUPPLY_STATUS_CHARGING = 1
        uint8 POWER_SUPPLY_STATUS_DISCHARGING = 2
        uint8 POWER_SUPPLY_STATUS_NOT_CHARGING = 3
        uint8 POWER_SUPPLY_STATUS_FULL = 4
        uint8 POWER_SUPPLY_HEALTH_UNKNOWN = 0
        uint8 POWER_SUPPLY_HEALTH_GOOD = 1
        uint8 POWER_SUPPLY_HEALTH_OVERHEAT = 2
        uint8 POWER_SUPPLY_HEALTH_DEAD = 3
        uint8 POWER_SUPPLY_HEALTH_OVERVOLTAGE = 4
        uint8 POWER_SUPPLY_HEALTH_UNSPEC_FAILURE = 5
        uint8 POWER_SUPPLY_HEALTH_COLD = 6
        uint8 POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE = 7
        uint8 POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE = 8
        uint8 POWER_SUPPLY_TECHNOLOGY_UNKNOWN = 0
        uint8 POWER_SUPPLY_TECHNOLOGY_NIMH = 1
        uint8 POWER_SUPPLY_TECHNOLOGY_LION = 2
        uint8 POWER_SUPPLY_TECHNOLOGY_LIPO = 3
        uint8 POWER_SUPPLY_TECHNOLOGY_LIFE = 4
        uint8 POWER_SUPPLY_TECHNOLOGY_NICD = 5
        uint8 POWER_SUPPLY_TECHNOLOGY_LIMN = 6
        std_msgs/Header  header
                builtin_interfaces/Time stamp
                        int32 sec
                        uint32 nanosec
                string frame_id
        float32 voltage
        float32 temperature
        float32 current
        float32 charge
        float32 capacity
        float32 design_capacity
        float32 percentage
        uint8   power_supply_status
        uint8   power_supply_health
        uint8   power_supply_technology
        bool    present
        float32[] cell_voltage
                                 # If individual voltages unknown but number of cells known set each to NaN
        float32[] cell_temperature
                                   # If individual temperatures unknown but number of cells known set each to NaN
        string location
        string serial_number

```