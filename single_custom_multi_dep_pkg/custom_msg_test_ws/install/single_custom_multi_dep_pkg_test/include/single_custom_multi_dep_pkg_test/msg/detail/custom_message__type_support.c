// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from single_custom_multi_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "single_custom_multi_dep_pkg_test/msg/detail/custom_message__rosidl_typesupport_introspection_c.h"
#include "single_custom_multi_dep_pkg_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "single_custom_multi_dep_pkg_test/msg/detail/custom_message__functions.h"
#include "single_custom_multi_dep_pkg_test/msg/detail/custom_message__struct.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/point.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `batter_info`
#include "sensor_msgs/msg/battery_state.h"
// Member `batter_info`
#include "sensor_msgs/msg/detail/battery_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  single_custom_multi_dep_pkg_test__msg__CustomMessage__init(message_memory);
}

void CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_fini_function(void * message_memory)
{
  single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_member_array[2] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(single_custom_multi_dep_pkg_test__msg__CustomMessage, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "batter_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(single_custom_multi_dep_pkg_test__msg__CustomMessage, batter_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_members = {
  "single_custom_multi_dep_pkg_test__msg",  // message namespace
  "CustomMessage",  // message name
  2,  // number of fields
  sizeof(single_custom_multi_dep_pkg_test__msg__CustomMessage),
  CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_member_array,  // message members
  CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle = {
  0,
  &CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_single_custom_multi_dep_pkg_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, single_custom_multi_dep_pkg_test, msg, CustomMessage)() {
  CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, BatteryState)();
  if (!CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle.typesupport_identifier) {
    CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
