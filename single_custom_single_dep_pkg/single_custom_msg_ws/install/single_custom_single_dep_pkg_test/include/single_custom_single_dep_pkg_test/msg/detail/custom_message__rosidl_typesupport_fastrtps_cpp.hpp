// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from single_custom_single_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "single_custom_single_dep_pkg_test/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "single_custom_single_dep_pkg_test/msg/detail/custom_message__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace single_custom_single_dep_pkg_test
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test
cdr_serialize(
  const single_custom_single_dep_pkg_test::msg::CustomMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  single_custom_single_dep_pkg_test::msg::CustomMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test
get_serialized_size(
  const single_custom_single_dep_pkg_test::msg::CustomMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test
max_serialized_size_CustomMessage(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace single_custom_single_dep_pkg_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, single_custom_single_dep_pkg_test, msg, CustomMessage)();

#ifdef __cplusplus
}
#endif

#endif  // SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_