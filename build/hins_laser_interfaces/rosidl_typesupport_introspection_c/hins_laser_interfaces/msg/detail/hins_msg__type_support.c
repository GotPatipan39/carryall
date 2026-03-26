// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hins_laser_interfaces/msg/detail/hins_msg__rosidl_typesupport_introspection_c.h"
#include "hins_laser_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hins_laser_interfaces/msg/detail/hins_msg__functions.h"
#include "hins_laser_interfaces/msg/detail/hins_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hins_laser_interfaces__msg__HinsMsg__init(message_memory);
}

void hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_fini_function(void * message_memory)
{
  hins_laser_interfaces__msg__HinsMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_message_member_array[4] = {
  {
    "area1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces__msg__HinsMsg, area1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces__msg__HinsMsg, area2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces__msg__HinsMsg, area3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces__msg__HinsMsg, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_message_members = {
  "hins_laser_interfaces__msg",  // message namespace
  "HinsMsg",  // message name
  4,  // number of fields
  sizeof(hins_laser_interfaces__msg__HinsMsg),
  false,  // has_any_key_member_
  hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_message_member_array,  // message members
  hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_message_type_support_handle = {
  0,
  &hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_message_members,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__msg__HinsMsg__get_type_hash,
  &hins_laser_interfaces__msg__HinsMsg__get_type_description,
  &hins_laser_interfaces__msg__HinsMsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hins_laser_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, msg, HinsMsg)() {
  if (!hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_message_type_support_handle.typesupport_identifier) {
    hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hins_laser_interfaces__msg__HinsMsg__rosidl_typesupport_introspection_c__HinsMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
