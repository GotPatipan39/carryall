// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice
#include "hins_laser_interfaces/msg/detail/hins_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hins_laser_interfaces/msg/detail/hins_msg__functions.h"
#include "hins_laser_interfaces/msg/detail/hins_msg__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hins_laser_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_serialize(
  const hins_laser_interfaces::msg::HinsMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: area1
  cdr << (ros_message.area1 ? true : false);

  // Member: area2
  cdr << (ros_message.area2 ? true : false);

  // Member: area3
  cdr << (ros_message.area3 ? true : false);

  // Member: success
  cdr << (ros_message.success ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hins_laser_interfaces::msg::HinsMsg & ros_message)
{
  // Member: area1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.area1 = tmp ? true : false;
  }

  // Member: area2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.area2 = tmp ? true : false;
  }

  // Member: area3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.area3 = tmp ? true : false;
  }

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
get_serialized_size(
  const hins_laser_interfaces::msg::HinsMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: area1
  {
    size_t item_size = sizeof(ros_message.area1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: area2
  {
    size_t item_size = sizeof(ros_message.area2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: area3
  {
    size_t item_size = sizeof(ros_message.area3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
max_serialized_size_HinsMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: area1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: area2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: area3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hins_laser_interfaces::msg::HinsMsg;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_serialize_key(
  const hins_laser_interfaces::msg::HinsMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: area1
  cdr << (ros_message.area1 ? true : false);

  // Member: area2
  cdr << (ros_message.area2 ? true : false);

  // Member: area3
  cdr << (ros_message.area3 ? true : false);

  // Member: success
  cdr << (ros_message.success ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
get_serialized_size_key(
  const hins_laser_interfaces::msg::HinsMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: area1
  {
    size_t item_size = sizeof(ros_message.area1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: area2
  {
    size_t item_size = sizeof(ros_message.area2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: area3
  {
    size_t item_size = sizeof(ros_message.area3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
max_serialized_size_key_HinsMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: area1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: area2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: area3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hins_laser_interfaces::msg::HinsMsg;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HinsMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hins_laser_interfaces::msg::HinsMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HinsMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hins_laser_interfaces::msg::HinsMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HinsMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hins_laser_interfaces::msg::HinsMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HinsMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HinsMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HinsMsg__callbacks = {
  "hins_laser_interfaces::msg",
  "HinsMsg",
  _HinsMsg__cdr_serialize,
  _HinsMsg__cdr_deserialize,
  _HinsMsg__get_serialized_size,
  _HinsMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HinsMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HinsMsg__callbacks,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__msg__HinsMsg__get_type_hash,
  &hins_laser_interfaces__msg__HinsMsg__get_type_description,
  &hins_laser_interfaces__msg__HinsMsg__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hins_laser_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hins_laser_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<hins_laser_interfaces::msg::HinsMsg>()
{
  return &hins_laser_interfaces::msg::typesupport_fastrtps_cpp::_HinsMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hins_laser_interfaces, msg, HinsMsg)() {
  return &hins_laser_interfaces::msg::typesupport_fastrtps_cpp::_HinsMsg__handle;
}

#ifdef __cplusplus
}
#endif
