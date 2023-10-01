// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from single_custom_multi_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
#define SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'batter_info'
#include "sensor_msgs/msg/detail/battery_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__single_custom_multi_dep_pkg_test__msg__CustomMessage __attribute__((deprecated))
#else
# define DEPRECATED__single_custom_multi_dep_pkg_test__msg__CustomMessage __declspec(deprecated)
#endif

namespace single_custom_multi_dep_pkg_test
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMessage_
{
  using Type = CustomMessage_<ContainerAllocator>;

  explicit CustomMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init),
    batter_info(_init)
  {
    (void)_init;
  }

  explicit CustomMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init),
    batter_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _batter_info_type =
    sensor_msgs::msg::BatteryState_<ContainerAllocator>;
  _batter_info_type batter_info;

  // setters for named parameter idiom
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__batter_info(
    const sensor_msgs::msg::BatteryState_<ContainerAllocator> & _arg)
  {
    this->batter_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__single_custom_multi_dep_pkg_test__msg__CustomMessage
    std::shared_ptr<single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__single_custom_multi_dep_pkg_test__msg__CustomMessage
    std::shared_ptr<single_custom_multi_dep_pkg_test::msg::CustomMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMessage_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->batter_info != other.batter_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMessage_

// alias to use template instance with default allocator
using CustomMessage =
  single_custom_multi_dep_pkg_test::msg::CustomMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace single_custom_multi_dep_pkg_test

#endif  // SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
