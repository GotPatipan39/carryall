// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/msg/hins_msg.h"


#ifndef HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__FUNCTIONS_H_
#define HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "hins_laser_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "hins_laser_interfaces/msg/detail/hins_msg__struct.h"

/// Initialize msg/HinsMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hins_laser_interfaces__msg__HinsMsg
 * )) before or use
 * hins_laser_interfaces__msg__HinsMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
bool
hins_laser_interfaces__msg__HinsMsg__init(hins_laser_interfaces__msg__HinsMsg * msg);

/// Finalize msg/HinsMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
void
hins_laser_interfaces__msg__HinsMsg__fini(hins_laser_interfaces__msg__HinsMsg * msg);

/// Create msg/HinsMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hins_laser_interfaces__msg__HinsMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
hins_laser_interfaces__msg__HinsMsg *
hins_laser_interfaces__msg__HinsMsg__create(void);

/// Destroy msg/HinsMsg message.
/**
 * It calls
 * hins_laser_interfaces__msg__HinsMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
void
hins_laser_interfaces__msg__HinsMsg__destroy(hins_laser_interfaces__msg__HinsMsg * msg);

/// Check for msg/HinsMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
bool
hins_laser_interfaces__msg__HinsMsg__are_equal(const hins_laser_interfaces__msg__HinsMsg * lhs, const hins_laser_interfaces__msg__HinsMsg * rhs);

/// Copy a msg/HinsMsg message.
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
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
bool
hins_laser_interfaces__msg__HinsMsg__copy(
  const hins_laser_interfaces__msg__HinsMsg * input,
  hins_laser_interfaces__msg__HinsMsg * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
const rosidl_type_hash_t *
hins_laser_interfaces__msg__HinsMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
hins_laser_interfaces__msg__HinsMsg__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
const rosidl_runtime_c__type_description__TypeSource *
hins_laser_interfaces__msg__HinsMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
hins_laser_interfaces__msg__HinsMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/HinsMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * hins_laser_interfaces__msg__HinsMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
bool
hins_laser_interfaces__msg__HinsMsg__Sequence__init(hins_laser_interfaces__msg__HinsMsg__Sequence * array, size_t size);

/// Finalize array of msg/HinsMsg messages.
/**
 * It calls
 * hins_laser_interfaces__msg__HinsMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
void
hins_laser_interfaces__msg__HinsMsg__Sequence__fini(hins_laser_interfaces__msg__HinsMsg__Sequence * array);

/// Create array of msg/HinsMsg messages.
/**
 * It allocates the memory for the array and calls
 * hins_laser_interfaces__msg__HinsMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
hins_laser_interfaces__msg__HinsMsg__Sequence *
hins_laser_interfaces__msg__HinsMsg__Sequence__create(size_t size);

/// Destroy array of msg/HinsMsg messages.
/**
 * It calls
 * hins_laser_interfaces__msg__HinsMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
void
hins_laser_interfaces__msg__HinsMsg__Sequence__destroy(hins_laser_interfaces__msg__HinsMsg__Sequence * array);

/// Check for msg/HinsMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
bool
hins_laser_interfaces__msg__HinsMsg__Sequence__are_equal(const hins_laser_interfaces__msg__HinsMsg__Sequence * lhs, const hins_laser_interfaces__msg__HinsMsg__Sequence * rhs);

/// Copy an array of msg/HinsMsg messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
bool
hins_laser_interfaces__msg__HinsMsg__Sequence__copy(
  const hins_laser_interfaces__msg__HinsMsg__Sequence * input,
  hins_laser_interfaces__msg__HinsMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__FUNCTIONS_H_
