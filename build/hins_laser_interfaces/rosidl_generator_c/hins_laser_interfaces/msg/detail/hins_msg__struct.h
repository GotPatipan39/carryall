// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/msg/hins_msg.h"


#ifndef HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__STRUCT_H_
#define HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/HinsMsg in the package hins_laser_interfaces.
typedef struct hins_laser_interfaces__msg__HinsMsg
{
  bool area1;
  bool area2;
  bool area3;
  bool success;
} hins_laser_interfaces__msg__HinsMsg;

// Struct for a sequence of hins_laser_interfaces__msg__HinsMsg.
typedef struct hins_laser_interfaces__msg__HinsMsg__Sequence
{
  hins_laser_interfaces__msg__HinsMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hins_laser_interfaces__msg__HinsMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__STRUCT_H_
