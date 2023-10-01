// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage1.idl
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__STRUCT_HPP_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point_data'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_custom_multi_dep_pkg_test__msg__CustomMessage1 __attribute__((deprecated))
#else
# define DEPRECATED__multi_custom_multi_dep_pkg_test__msg__CustomMessage1 __declspec(deprecated)
#endif

namespace multi_custom_multi_dep_pkg_test
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMessage1_
{
  using Type = CustomMessage1_<ContainerAllocator>;

  explicit CustomMessage1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit CustomMessage1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _point_data_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _point_data_type point_data;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__point_data(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->point_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_custom_multi_dep_pkg_test__msg__CustomMessage1
    std::shared_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_custom_multi_dep_pkg_test__msg__CustomMessage1
    std::shared_ptr<multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMessage1_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->point_data != other.point_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMessage1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMessage1_

// alias to use template instance with default allocator
using CustomMessage1 =
  multi_custom_multi_dep_pkg_test::msg::CustomMessage1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multi_custom_multi_dep_pkg_test

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__STRUCT_HPP_
