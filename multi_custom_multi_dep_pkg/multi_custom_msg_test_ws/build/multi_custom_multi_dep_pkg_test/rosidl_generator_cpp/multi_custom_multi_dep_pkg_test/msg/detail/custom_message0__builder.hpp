// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__BUILDER_HPP_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__BUILDER_HPP_

#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace multi_custom_multi_dep_pkg_test
{

namespace msg
{

namespace builder
{

class Init_CustomMessage0_imu_data
{
public:
  explicit Init_CustomMessage0_imu_data(::multi_custom_multi_dep_pkg_test::msg::CustomMessage0 & msg)
  : msg_(msg)
  {}
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage0 imu_data(::multi_custom_multi_dep_pkg_test::msg::CustomMessage0::_imu_data_type arg)
  {
    msg_.imu_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage0 msg_;
};

class Init_CustomMessage0_message
{
public:
  explicit Init_CustomMessage0_message(::multi_custom_multi_dep_pkg_test::msg::CustomMessage0 & msg)
  : msg_(msg)
  {}
  Init_CustomMessage0_imu_data message(::multi_custom_multi_dep_pkg_test::msg::CustomMessage0::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CustomMessage0_imu_data(msg_);
  }

private:
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage0 msg_;
};

class Init_CustomMessage0_num
{
public:
  Init_CustomMessage0_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage0_message num(::multi_custom_multi_dep_pkg_test::msg::CustomMessage0::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_CustomMessage0_message(msg_);
  }

private:
  ::multi_custom_multi_dep_pkg_test::msg::CustomMessage0 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_custom_multi_dep_pkg_test::msg::CustomMessage0>()
{
  return multi_custom_multi_dep_pkg_test::msg::builder::Init_CustomMessage0_num();
}

}  // namespace multi_custom_multi_dep_pkg_test

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__BUILDER_HPP_
