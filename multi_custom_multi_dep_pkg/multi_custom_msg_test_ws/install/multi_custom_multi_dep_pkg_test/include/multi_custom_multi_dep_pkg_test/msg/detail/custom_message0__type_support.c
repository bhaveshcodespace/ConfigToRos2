// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__rosidl_typesupport_introspection_c.h"
#include "multi_custom_multi_dep_pkg_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__functions.h"
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `imu_data`
#include "sensor_msgs/msg/imu.h"
// Member `imu_data`
#include "sensor_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_custom_multi_dep_pkg_test__msg__CustomMessage0__init(message_memory);
}

void CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_fini_function(void * message_memory)
{
  multi_custom_multi_dep_pkg_test__msg__CustomMessage0__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_member_array[3] = {
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0, imu_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_members = {
  "multi_custom_multi_dep_pkg_test__msg",  // message namespace
  "CustomMessage0",  // message name
  3,  // number of fields
  sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0),
  CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_member_array,  // message members
  CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_type_support_handle = {
  0,
  &CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_custom_multi_dep_pkg_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_custom_multi_dep_pkg_test, msg, CustomMessage0)() {
  CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Imu)();
  if (!CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_type_support_handle.typesupport_identifier) {
    CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CustomMessage0__rosidl_typesupport_introspection_c__CustomMessage0_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
