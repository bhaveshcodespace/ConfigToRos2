// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__STRUCT_HPP_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'imu_data'
#include "sensor_msgs/msg/detail/imu__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_custom_multi_dep_pkg_test__msg__CustomMessage0 __attribute__((deprecated))
#else
# define DEPRECATED__multi_custom_multi_dep_pkg_test__msg__CustomMessage0 __declspec(deprecated)
#endif

namespace multi_custom_multi_dep_pkg_test
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMessage0_
{
  using Type = CustomMessage0_<ContainerAllocator>;

  explicit CustomMessage0_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0l;
      this->message = "";
    }
  }

  explicit CustomMessage0_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    imu_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0l;
      this->message = "";
    }
  }

  // field types and members
  using _num_type =
    int32_t;
  _num_type num;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _imu_data_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_data_type imu_data;

  // setters for named parameter idiom
  Type & set__num(
    const int32_t & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__imu_data(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_custom_multi_dep_pkg_test__msg__CustomMessage0
    std::shared_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_custom_multi_dep_pkg_test__msg__CustomMessage0
    std::shared_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMessage0_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->imu_data != other.imu_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMessage0_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMessage0_

// alias to use template instance with default allocator
using CustomMessage0 =
  multi_custom_multi_dep_pkg_test::msg::CustomMessage0_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multi_custom_multi_dep_pkg_test

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__STRUCT_HPP_
