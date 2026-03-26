// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hins_laser_interfaces:srv/HinsSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/srv/hins_srv.hpp"


#ifndef HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__BUILDER_HPP_
#define HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hins_laser_interfaces/srv/detail/hins_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hins_laser_interfaces
{

namespace srv
{

namespace builder
{

class Init_HinsSrv_Request_channel
{
public:
  Init_HinsSrv_Request_channel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hins_laser_interfaces::srv::HinsSrv_Request channel(::hins_laser_interfaces::srv::HinsSrv_Request::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hins_laser_interfaces::srv::HinsSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hins_laser_interfaces::srv::HinsSrv_Request>()
{
  return hins_laser_interfaces::srv::builder::Init_HinsSrv_Request_channel();
}

}  // namespace hins_laser_interfaces


namespace hins_laser_interfaces
{

namespace srv
{

namespace builder
{

class Init_HinsSrv_Response_success
{
public:
  explicit Init_HinsSrv_Response_success(::hins_laser_interfaces::srv::HinsSrv_Response & msg)
  : msg_(msg)
  {}
  ::hins_laser_interfaces::srv::HinsSrv_Response success(::hins_laser_interfaces::srv::HinsSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hins_laser_interfaces::srv::HinsSrv_Response msg_;
};

class Init_HinsSrv_Response_area3
{
public:
  explicit Init_HinsSrv_Response_area3(::hins_laser_interfaces::srv::HinsSrv_Response & msg)
  : msg_(msg)
  {}
  Init_HinsSrv_Response_success area3(::hins_laser_interfaces::srv::HinsSrv_Response::_area3_type arg)
  {
    msg_.area3 = std::move(arg);
    return Init_HinsSrv_Response_success(msg_);
  }

private:
  ::hins_laser_interfaces::srv::HinsSrv_Response msg_;
};

class Init_HinsSrv_Response_area2
{
public:
  explicit Init_HinsSrv_Response_area2(::hins_laser_interfaces::srv::HinsSrv_Response & msg)
  : msg_(msg)
  {}
  Init_HinsSrv_Response_area3 area2(::hins_laser_interfaces::srv::HinsSrv_Response::_area2_type arg)
  {
    msg_.area2 = std::move(arg);
    return Init_HinsSrv_Response_area3(msg_);
  }

private:
  ::hins_laser_interfaces::srv::HinsSrv_Response msg_;
};

class Init_HinsSrv_Response_area1
{
public:
  Init_HinsSrv_Response_area1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HinsSrv_Response_area2 area1(::hins_laser_interfaces::srv::HinsSrv_Response::_area1_type arg)
  {
    msg_.area1 = std::move(arg);
    return Init_HinsSrv_Response_area2(msg_);
  }

private:
  ::hins_laser_interfaces::srv::HinsSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hins_laser_interfaces::srv::HinsSrv_Response>()
{
  return hins_laser_interfaces::srv::builder::Init_HinsSrv_Response_area1();
}

}  // namespace hins_laser_interfaces


namespace hins_laser_interfaces
{

namespace srv
{

namespace builder
{

class Init_HinsSrv_Event_response
{
public:
  explicit Init_HinsSrv_Event_response(::hins_laser_interfaces::srv::HinsSrv_Event & msg)
  : msg_(msg)
  {}
  ::hins_laser_interfaces::srv::HinsSrv_Event response(::hins_laser_interfaces::srv::HinsSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hins_laser_interfaces::srv::HinsSrv_Event msg_;
};

class Init_HinsSrv_Event_request
{
public:
  explicit Init_HinsSrv_Event_request(::hins_laser_interfaces::srv::HinsSrv_Event & msg)
  : msg_(msg)
  {}
  Init_HinsSrv_Event_response request(::hins_laser_interfaces::srv::HinsSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_HinsSrv_Event_response(msg_);
  }

private:
  ::hins_laser_interfaces::srv::HinsSrv_Event msg_;
};

class Init_HinsSrv_Event_info
{
public:
  Init_HinsSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HinsSrv_Event_request info(::hins_laser_interfaces::srv::HinsSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_HinsSrv_Event_request(msg_);
  }

private:
  ::hins_laser_interfaces::srv::HinsSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hins_laser_interfaces::srv::HinsSrv_Event>()
{
  return hins_laser_interfaces::srv::builder::Init_HinsSrv_Event_info();
}

}  // namespace hins_laser_interfaces

#endif  // HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__BUILDER_HPP_
