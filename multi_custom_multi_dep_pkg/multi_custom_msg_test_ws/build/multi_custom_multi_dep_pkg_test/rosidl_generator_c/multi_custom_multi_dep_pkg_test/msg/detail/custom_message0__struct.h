// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__STRUCT_H_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'imu_data'
#include "sensor_msgs/msg/detail/imu__struct.h"

// Struct defined in msg/CustomMessage0 in the package multi_custom_multi_dep_pkg_test.
typedef struct multi_custom_multi_dep_pkg_test__msg__CustomMessage0
{
  int32_t num;
  rosidl_runtime_c__String message;
  sensor_msgs__msg__Imu imu_data;
} multi_custom_multi_dep_pkg_test__msg__CustomMessage0;

// Struct for a sequence of multi_custom_multi_dep_pkg_test__msg__CustomMessage0.
typedef struct multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence
{
  multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE0__STRUCT_H_
