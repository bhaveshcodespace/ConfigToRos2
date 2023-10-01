// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage1.idl
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__STRUCT_H_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point_data'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"

// Struct defined in msg/CustomMessage1 in the package multi_custom_multi_dep_pkg_test.
typedef struct multi_custom_multi_dep_pkg_test__msg__CustomMessage1
{
  double x;
  double y;
  double z;
  geometry_msgs__msg__PointStamped point_data;
} multi_custom_multi_dep_pkg_test__msg__CustomMessage1;

// Struct for a sequence of multi_custom_multi_dep_pkg_test__msg__CustomMessage1.
typedef struct multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence
{
  multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE1__STRUCT_H_
