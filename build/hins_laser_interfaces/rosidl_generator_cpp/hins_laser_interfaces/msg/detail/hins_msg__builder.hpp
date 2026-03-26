// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/msg/hins_msg.hpp"


#ifndef HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__BUILDER_HPP_
#define HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hins_laser_interfaces/msg/detail/hins_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hins_laser_interfaces
{

namespace msg
{

namespace builder
{

class Init_HinsMsg_success
{
public:
  explicit Init_HinsMsg_success(::hins_laser_interfaces::msg::HinsMsg & msg)
  : msg_(msg)
  {}
  ::hins_laser_interfaces::msg::HinsMsg success(::hins_laser_interfaces::msg::HinsMsg::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hins_laser_interfaces::msg::HinsMsg msg_;
};

class Init_HinsMsg_area3
{
public:
  explicit Init_HinsMsg_area3(::hins_laser_interfaces::msg::HinsMsg & msg)
  : msg_(msg)
  {}
  Init_HinsMsg_success area3(::hins_laser_interfaces::msg::HinsMsg::_area3_type arg)
  {
    msg_.area3 = std::move(arg);
    return Init_HinsMsg_success(msg_);
  }

private:
  ::hins_laser_interfaces::msg::HinsMsg msg_;
};

class Init_HinsMsg_area2
{
public:
  explicit Init_HinsMsg_area2(::hins_laser_interfaces::msg::HinsMsg & msg)
  : msg_(msg)
  {}
  Init_HinsMsg_area3 area2(::hins_laser_interfaces::msg::HinsMsg::_area2_type arg)
  {
    msg_.area2 = std::move(arg);
    return Init_HinsMsg_area3(msg_);
  }

private:
  ::hins_laser_interfaces::msg::HinsMsg msg_;
};

class Init_HinsMsg_area1
{
public:
  Init_HinsMsg_area1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HinsMsg_area2 area1(::hins_laser_interfaces::msg::HinsMsg::_area1_type arg)
  {
    msg_.area1 = std::move(arg);
    return Init_HinsMsg_area2(msg_);
  }

private:
  ::hins_laser_interfaces::msg::HinsMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hins_laser_interfaces::msg::HinsMsg>()
{
  return hins_laser_interfaces::msg::builder::Init_HinsMsg_area1();
}

}  // namespace hins_laser_interfaces

#endif  // HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__BUILDER_HPP_
