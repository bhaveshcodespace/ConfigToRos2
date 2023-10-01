// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from single_custom_single_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
#define SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_

#include "single_custom_single_dep_pkg_test/msg/detail/custom_message__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const single_custom_single_dep_pkg_test::msg::CustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_yaml(msg.center, out, indentation + 2);
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const single_custom_single_dep_pkg_test::msg::CustomMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<single_custom_single_dep_pkg_test::msg::CustomMessage>()
{
  return "single_custom_single_dep_pkg_test::msg::CustomMessage";
}

template<>
inline const char * name<single_custom_single_dep_pkg_test::msg::CustomMessage>()
{
  return "single_custom_single_dep_pkg_test/msg/CustomMessage";
}

template<>
struct has_fixed_size<single_custom_single_dep_pkg_test::msg::CustomMessage>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<single_custom_single_dep_pkg_test::msg::CustomMessage>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<single_custom_single_dep_pkg_test::msg::CustomMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
