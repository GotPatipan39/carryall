// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hins_laser_interfaces:srv/HinsSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/srv/hins_srv.h"


#ifndef HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__STRUCT_H_
#define HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/HinsSrv in the package hins_laser_interfaces.
typedef struct hins_laser_interfaces__srv__HinsSrv_Request
{
  int64_t channel;
} hins_laser_interfaces__srv__HinsSrv_Request;

// Struct for a sequence of hins_laser_interfaces__srv__HinsSrv_Request.
typedef struct hins_laser_interfaces__srv__HinsSrv_Request__Sequence
{
  hins_laser_interfaces__srv__HinsSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hins_laser_interfaces__srv__HinsSrv_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/HinsSrv in the package hins_laser_interfaces.
typedef struct hins_laser_interfaces__srv__HinsSrv_Response
{
  bool area1;
  bool area2;
  bool area3;
  bool success;
} hins_laser_interfaces__srv__HinsSrv_Response;

// Struct for a sequence of hins_laser_interfaces__srv__HinsSrv_Response.
typedef struct hins_laser_interfaces__srv__HinsSrv_Response__Sequence
{
  hins_laser_interfaces__srv__HinsSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hins_laser_interfaces__srv__HinsSrv_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hins_laser_interfaces__srv__HinsSrv_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hins_laser_interfaces__srv__HinsSrv_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/HinsSrv in the package hins_laser_interfaces.
typedef struct hins_laser_interfaces__srv__HinsSrv_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hins_laser_interfaces__srv__HinsSrv_Request__Sequence request;
  hins_laser_interfaces__srv__HinsSrv_Response__Sequence response;
} hins_laser_interfaces__srv__HinsSrv_Event;

// Struct for a sequence of hins_laser_interfaces__srv__HinsSrv_Event.
typedef struct hins_laser_interfaces__srv__HinsSrv_Event__Sequence
{
  hins_laser_interfaces__srv__HinsSrv_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hins_laser_interfaces__srv__HinsSrv_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__STRUCT_H_
