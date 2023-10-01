// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage0.idl
// generated code does not contain a copyright notice
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message0__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `imu_data`
#include "sensor_msgs/msg/detail/imu__functions.h"

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__init(multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * msg)
{
  if (!msg) {
    return false;
  }
  // num
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    multi_custom_multi_dep_pkg_test__msg__CustomMessage0__fini(msg);
    return false;
  }
  // imu_data
  if (!sensor_msgs__msg__Imu__init(&msg->imu_data)) {
    multi_custom_multi_dep_pkg_test__msg__CustomMessage0__fini(msg);
    return false;
  }
  return true;
}

void
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__fini(multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * msg)
{
  if (!msg) {
    return;
  }
  // num
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // imu_data
  sensor_msgs__msg__Imu__fini(&msg->imu_data);
}

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__are_equal(const multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * lhs, const multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // imu_data
  if (!sensor_msgs__msg__Imu__are_equal(
      &(lhs->imu_data), &(rhs->imu_data)))
  {
    return false;
  }
  return true;
}

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__copy(
  const multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * input,
  multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * output)
{
  if (!input || !output) {
    return false;
  }
  // num
  output->num = input->num;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // imu_data
  if (!sensor_msgs__msg__Imu__copy(
      &(input->imu_data), &(output->imu_data)))
  {
    return false;
  }
  return true;
}

multi_custom_multi_dep_pkg_test__msg__CustomMessage0 *
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__create()
{
  multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * msg = (multi_custom_multi_dep_pkg_test__msg__CustomMessage0 *)malloc(sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0));
  bool success = multi_custom_multi_dep_pkg_test__msg__CustomMessage0__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__destroy(multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * msg)
{
  if (msg) {
    multi_custom_multi_dep_pkg_test__msg__CustomMessage0__fini(msg);
  }
  free(msg);
}


bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence__init(multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * data = NULL;
  if (size) {
    data = (multi_custom_multi_dep_pkg_test__msg__CustomMessage0 *)calloc(size, sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_custom_multi_dep_pkg_test__msg__CustomMessage0__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_custom_multi_dep_pkg_test__msg__CustomMessage0__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence__fini(multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      multi_custom_multi_dep_pkg_test__msg__CustomMessage0__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence *
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence__create(size_t size)
{
  multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence * array = (multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence *)malloc(sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence__destroy(multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence * array)
{
  if (array) {
    multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence__fini(array);
  }
  free(array);
}

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence__are_equal(const multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence * lhs, const multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_custom_multi_dep_pkg_test__msg__CustomMessage0__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence__copy(
  const multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence * input,
  multi_custom_multi_dep_pkg_test__msg__CustomMessage0__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage0);
    multi_custom_multi_dep_pkg_test__msg__CustomMessage0 * data =
      (multi_custom_multi_dep_pkg_test__msg__CustomMessage0 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_custom_multi_dep_pkg_test__msg__CustomMessage0__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          multi_custom_multi_dep_pkg_test__msg__CustomMessage0__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_custom_multi_dep_pkg_test__msg__CustomMessage0__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
