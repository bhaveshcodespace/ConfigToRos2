// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from single_custom_single_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "single_custom_single_dep_pkg_test/msg/detail/custom_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace single_custom_single_dep_pkg_test
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CustomMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) single_custom_single_dep_pkg_test::msg::CustomMessage(_init);
}

void CustomMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<single_custom_single_dep_pkg_test::msg::CustomMessage *>(message_memory);
  typed_message->~CustomMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CustomMessage_message_member_array[2] = {
  {
    "center",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(single_custom_single_dep_pkg_test::msg::CustomMessage, center),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(single_custom_single_dep_pkg_test::msg::CustomMessage, radius),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CustomMessage_message_members = {
  "single_custom_single_dep_pkg_test::msg",  // message namespace
  "CustomMessage",  // message name
  2,  // number of fields
  sizeof(single_custom_single_dep_pkg_test::msg::CustomMessage),
  CustomMessage_message_member_array,  // message members
  CustomMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CustomMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CustomMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace single_custom_single_dep_pkg_test


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<single_custom_single_dep_pkg_test::msg::CustomMessage>()
{
  return &::single_custom_single_dep_pkg_test::msg::rosidl_typesupport_introspection_cpp::CustomMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, single_custom_single_dep_pkg_test, msg, CustomMessage)() {
  return &::single_custom_single_dep_pkg_test::msg::rosidl_typesupport_introspection_cpp::CustomMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
