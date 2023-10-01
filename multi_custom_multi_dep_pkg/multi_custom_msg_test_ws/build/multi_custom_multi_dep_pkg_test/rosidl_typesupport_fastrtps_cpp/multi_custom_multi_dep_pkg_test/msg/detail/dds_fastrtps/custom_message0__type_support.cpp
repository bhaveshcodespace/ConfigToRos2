// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
// generated code does not contain a copyright notice
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__rosidl_typesupport_fastrtps_cpp.hpp"
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Imu &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Imu &);
size_t get_serialized_size(
  const sensor_msgs::msg::Imu &,
  size_t current_alignment);
size_t
max_serialized_size_Imu(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace multi_custom_multi_dep_pkg_test
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_custom_multi_dep_pkg_test
cdr_serialize(
  const multi_custom_multi_dep_pkg_test::msg::CustomMessage0 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num
  cdr << ros_message.num;
  // Member: message
  cdr << ros_message.message;
  // Member: imu_data
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu_data,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_custom_multi_dep_pkg_test
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multi_custom_multi_dep_pkg_test::msg::CustomMessage0 & ros_message)
{
  // Member: num
  cdr >> ros_message.num;

  // Member: message
  cdr >> ros_message.message;

  // Member: imu_data
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu_data);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_custom_multi_dep_pkg_test
get_serialized_size(
  const multi_custom_multi_dep_pkg_test::msg::CustomMessage0 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num
  {
    size_t item_size = sizeof(ros_message.num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);
  // Member: imu_data

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu_data, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_custom_multi_dep_pkg_test
max_serialized_size_CustomMessage0(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: imu_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Imu(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CustomMessage0__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const multi_custom_multi_dep_pkg_test::msg::CustomMessage0 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CustomMessage0__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<multi_custom_multi_dep_pkg_test::msg::CustomMessage0 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CustomMessage0__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const multi_custom_multi_dep_pkg_test::msg::CustomMessage0 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CustomMessage0__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CustomMessage0(full_bounded, 0);
}

static message_type_support_callbacks_t _CustomMessage0__callbacks = {
  "multi_custom_multi_dep_pkg_test::msg",
  "CustomMessage0",
  _CustomMessage0__cdr_serialize,
  _CustomMessage0__cdr_deserialize,
  _CustomMessage0__get_serialized_size,
  _CustomMessage0__max_serialized_size
};

static rosidl_message_type_support_t _CustomMessage0__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CustomMessage0__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace multi_custom_multi_dep_pkg_test

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_multi_custom_multi_dep_pkg_test
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_custom_multi_dep_pkg_test::msg::CustomMessage0>()
{
  return &multi_custom_multi_dep_pkg_test::msg::typesupport_fastrtps_cpp::_CustomMessage0__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_custom_multi_dep_pkg_test, msg, CustomMessage0)() {
  return &multi_custom_multi_dep_pkg_test::msg::typesupport_fastrtps_cpp::_CustomMessage0__handle;
}

#ifdef __cplusplus
}
#endif
