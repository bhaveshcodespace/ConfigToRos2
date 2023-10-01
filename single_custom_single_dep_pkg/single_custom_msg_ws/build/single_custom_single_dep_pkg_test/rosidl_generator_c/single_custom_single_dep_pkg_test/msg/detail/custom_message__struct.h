// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from single_custom_single_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
#define SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/CustomMessage in the package single_custom_single_dep_pkg_test.
typedef struct single_custom_single_dep_pkg_test__msg__CustomMessage
{
  geometry_msgs__msg__Point center;
  double radius;
} single_custom_single_dep_pkg_test__msg__CustomMessage;

// Struct for a sequence of single_custom_single_dep_pkg_test__msg__CustomMessage.
typedef struct single_custom_single_dep_pkg_test__msg__CustomMessage__Sequence
{
  single_custom_single_dep_pkg_test__msg__CustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} single_custom_single_dep_pkg_test__msg__CustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
