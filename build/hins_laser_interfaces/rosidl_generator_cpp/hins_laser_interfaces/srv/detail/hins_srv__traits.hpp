// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hins_laser_interfaces:srv/HinsSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/srv/hins_srv.hpp"


#ifndef HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__TRAITS_HPP_
#define HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hins_laser_interfaces/srv/detail/hins_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hins_laser_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HinsSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: channel
  {
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HinsSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HinsSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hins_laser_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hins_laser_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hins_laser_interfaces::srv::HinsSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hins_laser_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hins_laser_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const hins_laser_interfaces::srv::HinsSrv_Request & msg)
{
  return hins_laser_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hins_laser_interfaces::srv::HinsSrv_Request>()
{
  return "hins_laser_interfaces::srv::HinsSrv_Request";
}

template<>
inline const char * name<hins_laser_interfaces::srv::HinsSrv_Request>()
{
  return "hins_laser_interfaces/srv/HinsSrv_Request";
}

template<>
struct has_fixed_size<hins_laser_interfaces::srv::HinsSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hins_laser_interfaces::srv::HinsSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hins_laser_interfaces::srv::HinsSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hins_laser_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HinsSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: area1
  {
    out << "area1: ";
    rosidl_generator_traits::value_to_yaml(msg.area1, out);
    out << ", ";
  }

  // member: area2
  {
    out << "area2: ";
    rosidl_generator_traits::value_to_yaml(msg.area2, out);
    out << ", ";
  }

  // member: area3
  {
    out << "area3: ";
    rosidl_generator_traits::value_to_yaml(msg.area3, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HinsSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area1: ";
    rosidl_generator_traits::value_to_yaml(msg.area1, out);
    out << "\n";
  }

  // member: area2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area2: ";
    rosidl_generator_traits::value_to_yaml(msg.area2, out);
    out << "\n";
  }

  // member: area3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area3: ";
    rosidl_generator_traits::value_to_yaml(msg.area3, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HinsSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hins_laser_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hins_laser_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hins_laser_interfaces::srv::HinsSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hins_laser_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hins_laser_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const hins_laser_interfaces::srv::HinsSrv_Response & msg)
{
  return hins_laser_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hins_laser_interfaces::srv::HinsSrv_Response>()
{
  return "hins_laser_interfaces::srv::HinsSrv_Response";
}

template<>
inline const char * name<hins_laser_interfaces::srv::HinsSrv_Response>()
{
  return "hins_laser_interfaces/srv/HinsSrv_Response";
}

template<>
struct has_fixed_size<hins_laser_interfaces::srv::HinsSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hins_laser_interfaces::srv::HinsSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hins_laser_interfaces::srv::HinsSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace hins_laser_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HinsSrv_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HinsSrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HinsSrv_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hins_laser_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hins_laser_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hins_laser_interfaces::srv::HinsSrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  hins_laser_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hins_laser_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const hins_laser_interfaces::srv::HinsSrv_Event & msg)
{
  return hins_laser_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hins_laser_interfaces::srv::HinsSrv_Event>()
{
  return "hins_laser_interfaces::srv::HinsSrv_Event";
}

template<>
inline const char * name<hins_laser_interfaces::srv::HinsSrv_Event>()
{
  return "hins_laser_interfaces/srv/HinsSrv_Event";
}

template<>
struct has_fixed_size<hins_laser_interfaces::srv::HinsSrv_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hins_laser_interfaces::srv::HinsSrv_Event>
  : std::integral_constant<bool, has_bounded_size<hins_laser_interfaces::srv::HinsSrv_Request>::value && has_bounded_size<hins_laser_interfaces::srv::HinsSrv_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<hins_laser_interfaces::srv::HinsSrv_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hins_laser_interfaces::srv::HinsSrv>()
{
  return "hins_laser_interfaces::srv::HinsSrv";
}

template<>
inline const char * name<hins_laser_interfaces::srv::HinsSrv>()
{
  return "hins_laser_interfaces/srv/HinsSrv";
}

template<>
struct has_fixed_size<hins_laser_interfaces::srv::HinsSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<hins_laser_interfaces::srv::HinsSrv_Request>::value &&
    has_fixed_size<hins_laser_interfaces::srv::HinsSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<hins_laser_interfaces::srv::HinsSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<hins_laser_interfaces::srv::HinsSrv_Request>::value &&
    has_bounded_size<hins_laser_interfaces::srv::HinsSrv_Response>::value
  >
{
};

template<>
struct is_service<hins_laser_interfaces::srv::HinsSrv>
  : std::true_type
{
};

template<>
struct is_service_request<hins_laser_interfaces::srv::HinsSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hins_laser_interfaces::srv::HinsSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__TRAITS_HPP_
