# ConfigToRos2_code: 
## Main goal of configuration to ros2 system is that user just need to set configuration file correctly and then everthing is setup quickly and smoothly without worry about ros2 commands and required manual steps to createing workspace, pkg, cmakelist modification etc. with help of provided templets along withconfig.sh.


### Here, there are few directives are created. each directive consist config.sh and templetes to setup workspace and pkg correctly.details of each directory is explained below.

### config.sh file consist of information like ros2 distro,workspace name,workspace path,pkg name,custom msgs, dependecies msgs etc.


### 1. create_rclpy_pkg directive
It is used to auto create rclpy pkg using config.sh and create_rclpy_pkg.sh.user just need to enter correct value of each parameters in config.sh. In this create_ros2_workspace.sh script also added if user wants to create workspace (Optional).

### 2. create_workspace
It is used to create auto workspace using config.sh and create_ros2_workspace.sh.user just need to modify config.sh and then run create_ros2_workspace.sh to create ros2 workspace.

### 3. single_custom_single_dep_pkg
It is used to create single custom pkg with single dependency pkg. user just need to provid custom msg details and dependency msg in config.sh. and then just run create_single_cust_single_dep_pkg.sh which create ros2 custom pkg.

### 4. single_custom_multi_dep_pkg
It is used to create single custom pkg with multi dependencies pkgs. user just need to provid custom msg details and dependencies msg in config.sh. and then just run create_single_cust_multi_dep_pkg.sh which create ros2 custom pkg.

### 5. multi_custom_multi_dep_pkg
It is used to create multi custom pkgs with multi dependencies pkgs. user just need to provid custom msgs and dependencies msg in config.sh. and then just run create_multi_cust_multi_dep_pkg.sh which create ros2 custom pkgs.where use can see multiple msgs are created insid msg dirctive.

### README.md is provided in each directive to guide how to use templets.
# Note: User Just need to modify config.sh file. No need to modify remaining scripts.