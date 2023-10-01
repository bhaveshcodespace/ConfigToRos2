// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from single_custom_multi_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
#define SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_

#include "single_custom_multi_dep_pkg_test/msg/detail/custom_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace single_custom_multi_dep_pkg_test
{

namespace msg
{

namespace builder
{

class Init_CustomMessage_batter_info
{
public:
  explicit Init_CustomMessage_batter_info(::single_custom_multi_dep_pkg_test::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  ::single_custom_multi_dep_pkg_test::msg::CustomMessage batter_info(::single_custom_multi_dep_pkg_test::msg::CustomMessage::_batter_info_type arg)
  {
    msg_.batter_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::single_custom_multi_dep_pkg_test::msg::CustomMessage msg_;
};

class Init_CustomMessage_center
{
public:
  Init_CustomMessage_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage_batter_info center(::single_custom_multi_dep_pkg_test::msg::CustomMessage::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_CustomMessage_batter_info(msg_);
  }

private:
  ::single_custom_multi_dep_pkg_test::msg::CustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::single_custom_multi_dep_pkg_test::msg::CustomMessage>()
{
  return single_custom_multi_dep_pkg_test::msg::builder::Init_CustomMessage_center();
}

}  // namespace single_custom_multi_dep_pkg_test

#endif  // SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
