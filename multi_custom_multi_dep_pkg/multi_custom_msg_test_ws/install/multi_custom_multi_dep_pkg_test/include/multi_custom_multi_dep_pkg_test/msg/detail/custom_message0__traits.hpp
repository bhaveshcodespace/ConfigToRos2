// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__TRAITS_HPP_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__TRAITS_HPP_

#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'imu_data'
#include "sensor_msgs/msg/detail/imu__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const multi_custom_multi_dep_pkg_test::msg::CustomMessage0 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    value_to_yaml(msg.num, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: imu_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_data:\n";
    to_yaml(msg.imu_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const multi_custom_multi_dep_pkg_test::msg::CustomMessage0 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<multi_custom_multi_dep_pkg_test::msg::CustomMessage0>()
{
  return "multi_custom_multi_dep_pkg_test::msg::CustomMessage0";
}

template<>
inline const char * name<multi_custom_multi_dep_pkg_test::msg::CustomMessage0>()
{
  return "multi_custom_multi_dep_pkg_test/msg/CustomMessage0";
}

template<>
struct has_fixed_size<multi_custom_multi_dep_pkg_test::msg::CustomMessage0>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_custom_multi_dep_pkg_test::msg::CustomMessage0>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_custom_multi_dep_pkg_test::msg::CustomMessage0>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__TRAITS_HPP_
