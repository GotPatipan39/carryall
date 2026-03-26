// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hins_laser_interfaces/msg/detail/hins_msg__functions.h"
#include "hins_laser_interfaces/msg/detail/hins_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hins_laser_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HinsMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hins_laser_interfaces::msg::HinsMsg(_init);
}

void HinsMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hins_laser_interfaces::msg::HinsMsg *>(message_memory);
  typed_message->~HinsMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HinsMsg_message_member_array[4] = {
  {
    "area1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces::msg::HinsMsg, area1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "area2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces::msg::HinsMsg, area2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "area3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces::msg::HinsMsg, area3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hins_laser_interfaces::msg::HinsMsg, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HinsMsg_message_members = {
  "hins_laser_interfaces::msg",  // message namespace
  "HinsMsg",  // message name
  4,  // number of fields
  sizeof(hins_laser_interfaces::msg::HinsMsg),
  false,  // has_any_key_member_
  HinsMsg_message_member_array,  // message members
  HinsMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  HinsMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HinsMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HinsMsg_message_members,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__msg__HinsMsg__get_type_hash,
  &hins_laser_interfaces__msg__HinsMsg__get_type_description,
  &hins_laser_interfaces__msg__HinsMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hins_laser_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hins_laser_interfaces::msg::HinsMsg>()
{
  return &::hins_laser_interfaces::msg::rosidl_typesupport_introspection_cpp::HinsMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hins_laser_interfaces, msg, HinsMsg)() {
  return &::hins_laser_interfaces::msg::rosidl_typesupport_introspection_cpp::HinsMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
