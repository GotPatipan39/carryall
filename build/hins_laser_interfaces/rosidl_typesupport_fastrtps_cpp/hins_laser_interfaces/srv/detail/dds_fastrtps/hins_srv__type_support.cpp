// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hins_laser_interfaces:srv/HinsSrv.idl
// generated code does not contain a copyright notice
#include "hins_laser_interfaces/srv/detail/hins_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"
#include "hins_laser_interfaces/srv/detail/hins_srv__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_serialize(
  const hins_laser_interfaces::srv::HinsSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: channel
  cdr << ros_message.channel;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hins_laser_interfaces::srv::HinsSrv_Request & ros_message)
{
  // Member: channel
  cdr >> ros_message.channel;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
get_serialized_size(
  const hins_laser_interfaces::srv::HinsSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: channel
  {
    size_t item_size = sizeof(ros_message.channel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
max_serialized_size_HinsSrv_Request(
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

  // Member: channel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hins_laser_interfaces::srv::HinsSrv_Request;
    is_plain =
      (
      offsetof(DataType, channel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_serialize_key(
  const hins_laser_interfaces::srv::HinsSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: channel
  cdr << ros_message.channel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
get_serialized_size_key(
  const hins_laser_interfaces::srv::HinsSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: channel
  {
    size_t item_size = sizeof(ros_message.channel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
max_serialized_size_key_HinsSrv_Request(
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

  // Member: channel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hins_laser_interfaces::srv::HinsSrv_Request;
    is_plain =
      (
      offsetof(DataType, channel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HinsSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hins_laser_interfaces::srv::HinsSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HinsSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hins_laser_interfaces::srv::HinsSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HinsSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hins_laser_interfaces::srv::HinsSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HinsSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HinsSrv_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HinsSrv_Request__callbacks = {
  "hins_laser_interfaces::srv",
  "HinsSrv_Request",
  _HinsSrv_Request__cdr_serialize,
  _HinsSrv_Request__cdr_deserialize,
  _HinsSrv_Request__get_serialized_size,
  _HinsSrv_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HinsSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HinsSrv_Request__callbacks,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hins_laser_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hins_laser_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<hins_laser_interfaces::srv::HinsSrv_Request>()
{
  return &hins_laser_interfaces::srv::typesupport_fastrtps_cpp::_HinsSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hins_laser_interfaces, srv, HinsSrv_Request)() {
  return &hins_laser_interfaces::srv::typesupport_fastrtps_cpp::_HinsSrv_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hins_laser_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_serialize(
  const hins_laser_interfaces::srv::HinsSrv_Response & ros_message,
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
  hins_laser_interfaces::srv::HinsSrv_Response & ros_message)
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
  const hins_laser_interfaces::srv::HinsSrv_Response & ros_message,
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
max_serialized_size_HinsSrv_Response(
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
    using DataType = hins_laser_interfaces::srv::HinsSrv_Response;
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
  const hins_laser_interfaces::srv::HinsSrv_Response & ros_message,
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
  const hins_laser_interfaces::srv::HinsSrv_Response & ros_message,
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
max_serialized_size_key_HinsSrv_Response(
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
    using DataType = hins_laser_interfaces::srv::HinsSrv_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HinsSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hins_laser_interfaces::srv::HinsSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HinsSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hins_laser_interfaces::srv::HinsSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HinsSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hins_laser_interfaces::srv::HinsSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HinsSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HinsSrv_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HinsSrv_Response__callbacks = {
  "hins_laser_interfaces::srv",
  "HinsSrv_Response",
  _HinsSrv_Response__cdr_serialize,
  _HinsSrv_Response__cdr_deserialize,
  _HinsSrv_Response__get_serialized_size,
  _HinsSrv_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HinsSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HinsSrv_Response__callbacks,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hins_laser_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hins_laser_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<hins_laser_interfaces::srv::HinsSrv_Response>()
{
  return &hins_laser_interfaces::srv::typesupport_fastrtps_cpp::_HinsSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hins_laser_interfaces, srv, HinsSrv_Response)() {
  return &hins_laser_interfaces::srv::typesupport_fastrtps_cpp::_HinsSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace service_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  service_msgs::msg::ServiceEventInfo &);
size_t get_serialized_size(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_key_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace service_msgs

// functions for hins_laser_interfaces::srv::HinsSrv_Request already declared above

// functions for hins_laser_interfaces::srv::HinsSrv_Response already declared above


namespace hins_laser_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_serialize(
  const hins_laser_interfaces::srv::HinsSrv_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      hins_laser_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      hins_laser_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hins_laser_interfaces::srv::HinsSrv_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      hins_laser_interfaces::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      hins_laser_interfaces::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
get_serialized_size(
  const hins_laser_interfaces::srv::HinsSrv_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        hins_laser_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        hins_laser_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
max_serialized_size_HinsSrv_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hins_laser_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_HinsSrv_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hins_laser_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_HinsSrv_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hins_laser_interfaces::srv::HinsSrv_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
cdr_serialize_key(
  const hins_laser_interfaces::srv::HinsSrv_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      hins_laser_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      hins_laser_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
get_serialized_size_key(
  const hins_laser_interfaces::srv::HinsSrv_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        hins_laser_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        hins_laser_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hins_laser_interfaces
max_serialized_size_key_HinsSrv_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hins_laser_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_key_HinsSrv_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hins_laser_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_key_HinsSrv_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hins_laser_interfaces::srv::HinsSrv_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HinsSrv_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hins_laser_interfaces::srv::HinsSrv_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HinsSrv_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hins_laser_interfaces::srv::HinsSrv_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HinsSrv_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hins_laser_interfaces::srv::HinsSrv_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HinsSrv_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HinsSrv_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HinsSrv_Event__callbacks = {
  "hins_laser_interfaces::srv",
  "HinsSrv_Event",
  _HinsSrv_Event__cdr_serialize,
  _HinsSrv_Event__cdr_deserialize,
  _HinsSrv_Event__get_serialized_size,
  _HinsSrv_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HinsSrv_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HinsSrv_Event__callbacks,
  get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hins_laser_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hins_laser_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<hins_laser_interfaces::srv::HinsSrv_Event>()
{
  return &hins_laser_interfaces::srv::typesupport_fastrtps_cpp::_HinsSrv_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hins_laser_interfaces, srv, HinsSrv_Event)() {
  return &hins_laser_interfaces::srv::typesupport_fastrtps_cpp::_HinsSrv_Event__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace hins_laser_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _HinsSrv__callbacks = {
  "hins_laser_interfaces::srv",
  "HinsSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hins_laser_interfaces, srv, HinsSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hins_laser_interfaces, srv, HinsSrv_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _HinsSrv__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HinsSrv__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<hins_laser_interfaces::srv::HinsSrv_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<hins_laser_interfaces::srv::HinsSrv_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<hins_laser_interfaces::srv::HinsSrv_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<hins_laser_interfaces::srv::HinsSrv>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<hins_laser_interfaces::srv::HinsSrv>,
  &hins_laser_interfaces__srv__HinsSrv__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hins_laser_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hins_laser_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<hins_laser_interfaces::srv::HinsSrv>()
{
  return &hins_laser_interfaces::srv::typesupport_fastrtps_cpp::_HinsSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hins_laser_interfaces, srv, HinsSrv)() {
  return &hins_laser_interfaces::srv::typesupport_fastrtps_cpp::_HinsSrv__handle;
}

#ifdef __cplusplus
}
#endif
