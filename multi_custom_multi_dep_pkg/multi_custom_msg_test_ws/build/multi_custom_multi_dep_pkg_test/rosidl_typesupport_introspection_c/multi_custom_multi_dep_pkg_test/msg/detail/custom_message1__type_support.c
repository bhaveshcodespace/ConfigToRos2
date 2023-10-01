// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage1.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message1__rosidl_typesupport_introspection_c.h"
#include "multi_custom_multi_dep_pkg_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message1__functions.h"
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message1__struct.h"


// Include directives for member types
// Member `point_data`
#include "geometry_msgs/msg/point_stamped.h"
// Member `point_data`
#include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_custom_multi_dep_pkg_test__msg__CustomMessage1__init(message_memory);
}

void CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_fini_function(void * message_memory)
{
  multi_custom_multi_dep_pkg_test__msg__CustomMessage1__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1, point_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_members = {
  "multi_custom_multi_dep_pkg_test__msg",  // message namespace
  "CustomMessage1",  // message name
  4,  // number of fields
  sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1),
  CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_member_array,  // message members
  CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_type_support_handle = {
  0,
  &CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_custom_multi_dep_pkg_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_custom_multi_dep_pkg_test, msg, CustomMessage1)() {
  CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_type_support_handle.typesupport_identifier) {
    CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CustomMessage1__rosidl_typesupport_introspection_c__CustomMessage1_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
