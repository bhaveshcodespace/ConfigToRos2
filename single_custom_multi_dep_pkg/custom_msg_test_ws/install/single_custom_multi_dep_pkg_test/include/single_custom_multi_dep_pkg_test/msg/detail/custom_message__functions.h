// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from single_custom_multi_dep_pkg_test:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_
#define SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "single_custom_multi_dep_pkg_test/msg/rosidl_generator_c__visibility_control.h"

#include "single_custom_multi_dep_pkg_test/msg/detail/custom_message__struct.h"

/// Initialize msg/CustomMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * single_custom_multi_dep_pkg_test__msg__CustomMessage
 * )) before or use
 * single_custom_multi_dep_pkg_test__msg__CustomMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__init(single_custom_multi_dep_pkg_test__msg__CustomMessage * msg);

/// Finalize msg/CustomMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
void
single_custom_multi_dep_pkg_test__msg__CustomMessage__fini(single_custom_multi_dep_pkg_test__msg__CustomMessage * msg);

/// Create msg/CustomMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * single_custom_multi_dep_pkg_test__msg__CustomMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
single_custom_multi_dep_pkg_test__msg__CustomMessage *
single_custom_multi_dep_pkg_test__msg__CustomMessage__create();

/// Destroy msg/CustomMessage message.
/**
 * It calls
 * single_custom_multi_dep_pkg_test__msg__CustomMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
void
single_custom_multi_dep_pkg_test__msg__CustomMessage__destroy(single_custom_multi_dep_pkg_test__msg__CustomMessage * msg);

/// Check for msg/CustomMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__are_equal(const single_custom_multi_dep_pkg_test__msg__CustomMessage * lhs, const single_custom_multi_dep_pkg_test__msg__CustomMessage * rhs);

/// Copy a msg/CustomMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__copy(
  const single_custom_multi_dep_pkg_test__msg__CustomMessage * input,
  single_custom_multi_dep_pkg_test__msg__CustomMessage * output);

/// Initialize array of msg/CustomMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * single_custom_multi_dep_pkg_test__msg__CustomMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__init(single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * array, size_t size);

/// Finalize array of msg/CustomMessage messages.
/**
 * It calls
 * single_custom_multi_dep_pkg_test__msg__CustomMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
void
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__fini(single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * array);

/// Create array of msg/CustomMessage messages.
/**
 * It allocates the memory for the array and calls
 * single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence *
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__create(size_t size);

/// Destroy array of msg/CustomMessage messages.
/**
 * It calls
 * single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
void
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__destroy(single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * array);

/// Check for msg/CustomMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__are_equal(const single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * lhs, const single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * rhs);

/// Copy an array of msg/CustomMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_single_custom_multi_dep_pkg_test
bool
single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence__copy(
  const single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * input,
  single_custom_multi_dep_pkg_test__msg__CustomMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SINGLE_CUSTOM_MULTI_DEP_PKG_TEST__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_
