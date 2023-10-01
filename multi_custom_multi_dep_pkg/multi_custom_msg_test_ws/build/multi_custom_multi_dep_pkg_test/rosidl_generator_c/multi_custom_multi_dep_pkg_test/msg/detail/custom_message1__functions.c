// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multi_custom_multi_dep_pkg_test:msg/CustomMessage1.idl
// generated code does not contain a copyright notice
#include "multi_custom_multi_dep_pkg_test/msg/detail/custom_message1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `point_data`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__init(multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // point_data
  if (!geometry_msgs__msg__PointStamped__init(&msg->point_data)) {
    multi_custom_multi_dep_pkg_test__msg__CustomMessage1__fini(msg);
    return false;
  }
  return true;
}

void
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__fini(multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // point_data
  geometry_msgs__msg__PointStamped__fini(&msg->point_data);
}

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__are_equal(const multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * lhs, const multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // point_data
  if (!geometry_msgs__msg__PointStamped__are_equal(
      &(lhs->point_data), &(rhs->point_data)))
  {
    return false;
  }
  return true;
}

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__copy(
  const multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * input,
  multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // point_data
  if (!geometry_msgs__msg__PointStamped__copy(
      &(input->point_data), &(output->point_data)))
  {
    return false;
  }
  return true;
}

multi_custom_multi_dep_pkg_test__msg__CustomMessage1 *
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__create()
{
  multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * msg = (multi_custom_multi_dep_pkg_test__msg__CustomMessage1 *)malloc(sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1));
  bool success = multi_custom_multi_dep_pkg_test__msg__CustomMessage1__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__destroy(multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * msg)
{
  if (msg) {
    multi_custom_multi_dep_pkg_test__msg__CustomMessage1__fini(msg);
  }
  free(msg);
}


bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence__init(multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * data = NULL;
  if (size) {
    data = (multi_custom_multi_dep_pkg_test__msg__CustomMessage1 *)calloc(size, sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_custom_multi_dep_pkg_test__msg__CustomMessage1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_custom_multi_dep_pkg_test__msg__CustomMessage1__fini(&data[i - 1]);
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
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence__fini(multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      multi_custom_multi_dep_pkg_test__msg__CustomMessage1__fini(&array->data[i]);
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

multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence *
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence__create(size_t size)
{
  multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence * array = (multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence *)malloc(sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence__destroy(multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence * array)
{
  if (array) {
    multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence__fini(array);
  }
  free(array);
}

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence__are_equal(const multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence * lhs, const multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_custom_multi_dep_pkg_test__msg__CustomMessage1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence__copy(
  const multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence * input,
  multi_custom_multi_dep_pkg_test__msg__CustomMessage1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_custom_multi_dep_pkg_test__msg__CustomMessage1);
    multi_custom_multi_dep_pkg_test__msg__CustomMessage1 * data =
      (multi_custom_multi_dep_pkg_test__msg__CustomMessage1 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_custom_multi_dep_pkg_test__msg__CustomMessage1__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          multi_custom_multi_dep_pkg_test__msg__CustomMessage1__fini(&data[i]);
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
    if (!multi_custom_multi_dep_pkg_test__msg__CustomMessage1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
