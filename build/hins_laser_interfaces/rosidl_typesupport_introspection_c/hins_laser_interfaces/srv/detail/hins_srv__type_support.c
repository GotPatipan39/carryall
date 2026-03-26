// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hins_laser_interfaces:srv/HinsSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hins_laser_interfaces/srv/detail/hins_srv__rosidl_typesupport_introspection_c.h"
#include "hins_laser_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"
#include "hins_laser_interfaces/srv/detail/hins_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hins_laser_interfaces__srv__HinsSrv_Request__init(message_memory);
}

void hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_fini_function(void * message_memory)
{
  hins_laser_interfaces__srv__HinsSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_member_array[1] = {
  {
    "channel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces__srv__HinsSrv_Request, channel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_members = {
  "hins_laser_interfaces__srv",  // message namespace
  "HinsSrv_Request",  // message name
  1,  // number of fields
  sizeof(hins_laser_interfaces__srv__HinsSrv_Request),
  false,  // has_any_key_member_
  hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_member_array,  // message members
  hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_type_support_handle = {
  0,
  &hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_members,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hins_laser_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Request)() {
  if (!hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_type_support_handle.typesupport_identifier) {
    hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hins_laser_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hins_laser_interfaces__srv__HinsSrv_Response__init(message_memory);
}

void hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_fini_function(void * message_memory)
{
  hins_laser_interfaces__srv__HinsSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_member_array[4] = {
  {
    "area1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces__srv__HinsSrv_Response, area1),  // bytes offset in struct
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
    offsetof(hins_laser_interfaces__srv__HinsSrv_Response, area2),  // bytes offset in struct
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
    offsetof(hins_laser_interfaces__srv__HinsSrv_Response, area3),  // bytes offset in struct
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
    offsetof(hins_laser_interfaces__srv__HinsSrv_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_members = {
  "hins_laser_interfaces__srv",  // message namespace
  "HinsSrv_Response",  // message name
  4,  // number of fields
  sizeof(hins_laser_interfaces__srv__HinsSrv_Response),
  false,  // has_any_key_member_
  hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_member_array,  // message members
  hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_type_support_handle = {
  0,
  &hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_members,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hins_laser_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Response)() {
  if (!hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_type_support_handle.typesupport_identifier) {
    hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hins_laser_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "hins_laser_interfaces/srv/hins_srv.h"
// Member `request`
// Member `response`
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hins_laser_interfaces__srv__HinsSrv_Event__init(message_memory);
}

void hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_fini_function(void * message_memory)
{
  hins_laser_interfaces__srv__HinsSrv_Event__fini(message_memory);
}

size_t hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__size_function__HinsSrv_Event__request(
  const void * untyped_member)
{
  const hins_laser_interfaces__srv__HinsSrv_Request__Sequence * member =
    (const hins_laser_interfaces__srv__HinsSrv_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_const_function__HinsSrv_Event__request(
  const void * untyped_member, size_t index)
{
  const hins_laser_interfaces__srv__HinsSrv_Request__Sequence * member =
    (const hins_laser_interfaces__srv__HinsSrv_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_function__HinsSrv_Event__request(
  void * untyped_member, size_t index)
{
  hins_laser_interfaces__srv__HinsSrv_Request__Sequence * member =
    (hins_laser_interfaces__srv__HinsSrv_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__fetch_function__HinsSrv_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hins_laser_interfaces__srv__HinsSrv_Request * item =
    ((const hins_laser_interfaces__srv__HinsSrv_Request *)
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_const_function__HinsSrv_Event__request(untyped_member, index));
  hins_laser_interfaces__srv__HinsSrv_Request * value =
    (hins_laser_interfaces__srv__HinsSrv_Request *)(untyped_value);
  *value = *item;
}

void hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__assign_function__HinsSrv_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hins_laser_interfaces__srv__HinsSrv_Request * item =
    ((hins_laser_interfaces__srv__HinsSrv_Request *)
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_function__HinsSrv_Event__request(untyped_member, index));
  const hins_laser_interfaces__srv__HinsSrv_Request * value =
    (const hins_laser_interfaces__srv__HinsSrv_Request *)(untyped_value);
  *item = *value;
}

bool hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__resize_function__HinsSrv_Event__request(
  void * untyped_member, size_t size)
{
  hins_laser_interfaces__srv__HinsSrv_Request__Sequence * member =
    (hins_laser_interfaces__srv__HinsSrv_Request__Sequence *)(untyped_member);
  hins_laser_interfaces__srv__HinsSrv_Request__Sequence__fini(member);
  return hins_laser_interfaces__srv__HinsSrv_Request__Sequence__init(member, size);
}

size_t hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__size_function__HinsSrv_Event__response(
  const void * untyped_member)
{
  const hins_laser_interfaces__srv__HinsSrv_Response__Sequence * member =
    (const hins_laser_interfaces__srv__HinsSrv_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_const_function__HinsSrv_Event__response(
  const void * untyped_member, size_t index)
{
  const hins_laser_interfaces__srv__HinsSrv_Response__Sequence * member =
    (const hins_laser_interfaces__srv__HinsSrv_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_function__HinsSrv_Event__response(
  void * untyped_member, size_t index)
{
  hins_laser_interfaces__srv__HinsSrv_Response__Sequence * member =
    (hins_laser_interfaces__srv__HinsSrv_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__fetch_function__HinsSrv_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hins_laser_interfaces__srv__HinsSrv_Response * item =
    ((const hins_laser_interfaces__srv__HinsSrv_Response *)
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_const_function__HinsSrv_Event__response(untyped_member, index));
  hins_laser_interfaces__srv__HinsSrv_Response * value =
    (hins_laser_interfaces__srv__HinsSrv_Response *)(untyped_value);
  *value = *item;
}

void hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__assign_function__HinsSrv_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hins_laser_interfaces__srv__HinsSrv_Response * item =
    ((hins_laser_interfaces__srv__HinsSrv_Response *)
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_function__HinsSrv_Event__response(untyped_member, index));
  const hins_laser_interfaces__srv__HinsSrv_Response * value =
    (const hins_laser_interfaces__srv__HinsSrv_Response *)(untyped_value);
  *item = *value;
}

bool hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__resize_function__HinsSrv_Event__response(
  void * untyped_member, size_t size)
{
  hins_laser_interfaces__srv__HinsSrv_Response__Sequence * member =
    (hins_laser_interfaces__srv__HinsSrv_Response__Sequence *)(untyped_member);
  hins_laser_interfaces__srv__HinsSrv_Response__Sequence__fini(member);
  return hins_laser_interfaces__srv__HinsSrv_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces__srv__HinsSrv_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hins_laser_interfaces__srv__HinsSrv_Event, request),  // bytes offset in struct
    NULL,  // default value
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__size_function__HinsSrv_Event__request,  // size() function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_const_function__HinsSrv_Event__request,  // get_const(index) function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_function__HinsSrv_Event__request,  // get(index) function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__fetch_function__HinsSrv_Event__request,  // fetch(index, &value) function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__assign_function__HinsSrv_Event__request,  // assign(index, value) function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__resize_function__HinsSrv_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hins_laser_interfaces__srv__HinsSrv_Event, response),  // bytes offset in struct
    NULL,  // default value
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__size_function__HinsSrv_Event__response,  // size() function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_const_function__HinsSrv_Event__response,  // get_const(index) function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__get_function__HinsSrv_Event__response,  // get(index) function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__fetch_function__HinsSrv_Event__response,  // fetch(index, &value) function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__assign_function__HinsSrv_Event__response,  // assign(index, value) function pointer
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__resize_function__HinsSrv_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_members = {
  "hins_laser_interfaces__srv",  // message namespace
  "HinsSrv_Event",  // message name
  3,  // number of fields
  sizeof(hins_laser_interfaces__srv__HinsSrv_Event),
  false,  // has_any_key_member_
  hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_member_array,  // message members
  hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_type_support_handle = {
  0,
  &hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_members,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hins_laser_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Event)() {
  hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Request)();
  hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Response)();
  if (!hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_type_support_handle.typesupport_identifier) {
    hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hins_laser_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_service_members = {
  "hins_laser_interfaces__srv",  // service namespace
  "HinsSrv",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_Request_message_type_support_handle,
  NULL,  // response message
  // hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_Response_message_type_support_handle
  NULL  // event_message
  // hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_Response_message_type_support_handle
};


static rosidl_service_type_support_t hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_service_type_support_handle = {
  0,
  &hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_service_members,
  get_service_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Request__rosidl_typesupport_introspection_c__HinsSrv_Request_message_type_support_handle,
  &hins_laser_interfaces__srv__HinsSrv_Response__rosidl_typesupport_introspection_c__HinsSrv_Response_message_type_support_handle,
  &hins_laser_interfaces__srv__HinsSrv_Event__rosidl_typesupport_introspection_c__HinsSrv_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hins_laser_interfaces,
    srv,
    HinsSrv
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hins_laser_interfaces,
    srv,
    HinsSrv
  ),
  &hins_laser_interfaces__srv__HinsSrv__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hins_laser_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv)(void) {
  if (!hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_service_type_support_handle.typesupport_identifier) {
    hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Event)()->data;
  }

  return &hins_laser_interfaces__srv__detail__hins_srv__rosidl_typesupport_introspection_c__HinsSrv_service_type_support_handle;
}
