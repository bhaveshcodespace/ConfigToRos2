// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace multi_custom_multi_dep_pkg_test
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CustomMessage0_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) multi_custom_multi_dep_pkg_test::msg::CustomMessage0(_init);
}

void CustomMessage0_fini_function(void * message_memory)
{
  auto typed_message = static_cast<multi_custom_multi_dep_pkg_test::msg::CustomMessage0 *>(message_memory);
  typed_message->~CustomMessage0();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CustomMessage0_message_member_array[3] = {
  {
    "num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test::msg::CustomMessage0, num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test::msg::CustomMessage0, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Imu>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_custom_multi_dep_pkg_test::msg::CustomMessage0, imu_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CustomMessage0_message_members = {
  "multi_custom_multi_dep_pkg_test::msg",  // message namespace
  "CustomMessage0",  // message name
  3,  // number of fields
  sizeof(multi_custom_multi_dep_pkg_test::msg::CustomMessage0),
  CustomMessage0_message_member_array,  // message members
  CustomMessage0_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomMessage0_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CustomMessage0_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CustomMessage0_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace multi_custom_multi_dep_pkg_test


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_custom_multi_dep_pkg_test::msg::CustomMessage0>()
{
  return &::multi_custom_multi_dep_pkg_test::msg::rosidl_typesupport_introspection_cpp::CustomMessage0_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multi_custom_multi_dep_pkg_test, msg, CustomMessage0)() {
  return &::multi_custom_multi_dep_pkg_test::msg::rosidl_typesupport_introspection_cpp::CustomMessage0_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
