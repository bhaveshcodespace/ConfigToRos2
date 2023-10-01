// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage1.idl
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__BUILDER_HPP_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__BUILDER_HPP_

#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace multi_custom_multi_dep_pkg_test
{

namespace msg
{

namespace builder
{

class Init_CustomMessage1_point_data
{
public:
  explicit Init_CustomMessage1_point_data(::multi_custom_multi_dep_pkg_test::msg::CustomMessage1 & msg)
  : msg_(msg)
  {}
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage1 point_data(::multi_custom_multi_dep_pkg_test::msg::CustomMessage1::_point_data_type arg)
  {
    msg_.point_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage1 msg_;
};

class Init_CustomMessage1_z
{
public:
  explicit Init_CustomMessage1_z(::multi_custom_multi_dep_pkg_test::msg::CustomMessage1 & msg)
  : msg_(msg)
  {}
  Init_CustomMessage1_point_data z(::multi_custom_multi_dep_pkg_test::msg::CustomMessage1::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_CustomMessage1_point_data(msg_);
  }

private:
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage1 msg_;
};

class Init_CustomMessage1_y
{
public:
  explicit Init_CustomMessage1_y(::multi_custom_multi_dep_pkg_test::msg::CustomMessage1 & msg)
  : msg_(msg)
  {}
  Init_CustomMessage1_z y(::multi_custom_multi_dep_pkg_test::msg::CustomMessage1::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CustomMessage1_z(msg_);
  }

private:
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage1 msg_;
};

class Init_CustomMessage1_x
{
public:
  Init_CustomMessage1_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage1_y x(::multi_custom_multi_dep_pkg_test::msg::CustomMessage1::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CustomMessage1_y(msg_);
  }

private:
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_custom_multi_dep_pkg_test::msg::CustomMessage1>()
{
  return multi_custom_multi_dep_pkg_test::msg::builder::Init_CustomMessage1_x();
}

}  // namespace multi_custom_multi_dep_pkg_test

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__BUILDER_HPP_
