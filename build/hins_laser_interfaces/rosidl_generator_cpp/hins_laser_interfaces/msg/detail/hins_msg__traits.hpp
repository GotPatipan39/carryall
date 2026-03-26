// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/msg/hins_msg.hpp"


#ifndef HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__TRAITS_HPP_
#define HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hins_laser_interfaces/msg/detail/hins_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hins_laser_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HinsMsg & msg,
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
  const HinsMsg & msg,
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

inline std::string to_yaml(const HinsMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hins_laser_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hins_laser_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hins_laser_interfaces::msg::HinsMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  hins_laser_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hins_laser_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hins_laser_interfaces::msg::HinsMsg & msg)
{
  return hins_laser_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hins_laser_interfaces::msg::HinsMsg>()
{
  return "hins_laser_interfaces::msg::HinsMsg";
}

template<>
inline const char * name<hins_laser_interfaces::msg::HinsMsg>()
{
  return "hins_laser_interfaces/msg/HinsMsg";
}

template<>
struct has_fixed_size<hins_laser_interfaces::msg::HinsMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hins_laser_interfaces::msg::HinsMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hins_laser_interfaces::msg::HinsMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__TRAITS_HPP_
