// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage1.idl
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__TRAITS_HPP_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__TRAITS_HPP_

#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message1__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'point_data'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const multi_custom_multi_dep_pkg_test::msg::CustomMessage1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: point_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_data:\n";
    to_yaml(msg.point_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const multi_custom_multi_dep_pkg_test::msg::CustomMessage1 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<multi_custom_multi_dep_pkg_test::msg::CustomMessage1>()
{
  return "multi_custom_multi_dep_pkg_test::msg::CustomMessage1";
}

template<>
inline const char * name<multi_custom_multi_dep_pkg_test::msg::CustomMessage1>()
{
  return "multi_custom_multi_dep_pkg_test/msg/CustomMessage1";
}

template<>
struct has_fixed_size<multi_custom_multi_dep_pkg_test::msg::CustomMessage1>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct has_bounded_size<multi_custom_multi_dep_pkg_test::msg::CustomMessage1>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct is_message<multi_custom_multi_dep_pkg_test::msg::CustomMessage1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__TRAITS_HPP_
