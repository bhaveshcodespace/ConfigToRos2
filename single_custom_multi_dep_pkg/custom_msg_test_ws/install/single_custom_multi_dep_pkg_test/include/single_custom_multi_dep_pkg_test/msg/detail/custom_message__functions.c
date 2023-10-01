// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from single_custom_multi_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice
#include "single_custom_multi_dep_pkg_test/msg/detail/custom_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `batter_info`
#include "sensor_msgs/msg/detail/battery_state__functions.h"

bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__init(single_custom_multi_dep_pkg_test__msg__CustomMessage * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(msg);
    return false;
  }
  // batter_info
  if (!sensor_msgs__msg__BatteryState__init(&msg->batter_info)) {
    single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(msg);
    return false;
  }
  return true;
}

void
single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(single_custom_multi_dep_pkg_test__msg__CustomMessage * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // batter_info
  sensor_msgs__msg__BatteryState__fini(&msg->batter_info);
}

bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__are_equal(const single_custom_multi_dep_pkg_test__msg__CustomMessage * lhs, const single_custom_multi_dep_pkg_test__msg__CustomMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // batter_info
  if (!sensor_msgs__msg__BatteryState__are_equal(
      &(lhs->batter_info), &(rhs->batter_info)))
  {
    return false;
  }
  return true;
}

bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__copy(
  const single_custom_multi_dep_pkg_test__msg__CustomMessage * input,
  single_custom_multi_dep_pkg_test__msg__CustomMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // batter_info
  if (!sensor_msgs__msg__BatteryState__copy(
      &(input->batter_info), &(output->batter_info)))
  {
    return false;
  }
  return true;
}

single_custom_multi_dep_pkg_test__msg__CustomMessage *
single_custom_multi_dep_pkg_test__msg__CustomMessage__create()
{
  single_custom_multi_dep_pkg_test__msg__CustomMessage * msg = (single_custom_multi_dep_pkg_test__msg__CustomMessage *)malloc(sizeof(single_custom_multi_dep_pkg_test__msg__CustomMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(single_custom_multi_dep_pkg_test__msg__CustomMessage));
  bool success = single_custom_multi_dep_pkg_test__msg__CustomMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
single_custom_multi_dep_pkg_test__msg__CustomMessage__destroy(single_custom_multi_dep_pkg_test__msg__CustomMessage * msg)
{
  if (msg) {
    single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(msg);
  }
  free(msg);
}


bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__init(single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  single_custom_multi_dep_pkg_test__msg__CustomMessage * data = NULL;
  if (size) {
    data = (single_custom_multi_dep_pkg_test__msg__CustomMessage *)calloc(size, sizeof(single_custom_multi_dep_pkg_test__msg__CustomMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = single_custom_multi_dep_pkg_test__msg__CustomMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(&data[i - 1]);
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
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__fini(single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(&array->data[i]);
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

single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence *
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__create(size_t size)
{
  single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * array = (single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence *)malloc(sizeof(single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__destroy(single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * array)
{
  if (array) {
    single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__fini(array);
  }
  free(array);
}

bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__are_equal(const single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * lhs, const single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!single_custom_multi_dep_pkg_test__msg__CustomMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__copy(
  const single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * input,
  single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(single_custom_multi_dep_pkg_test__msg__CustomMessage);
    single_custom_multi_dep_pkg_test__msg__CustomMessage * data =
      (single_custom_multi_dep_pkg_test__msg__CustomMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!single_custom_multi_dep_pkg_test__msg__CustomMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(&data[i]);
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
    if (!single_custom_multi_dep_pkg_test__msg__CustomMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
