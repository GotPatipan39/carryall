// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/msg/hins_msg.hpp"


#ifndef HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__STRUCT_HPP_
#define HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hins_laser_interfaces__msg__HinsMsg __attribute__((deprecated))
#else
# define DEPRECATED__hins_laser_interfaces__msg__HinsMsg __declspec(deprecated)
#endif

namespace hins_laser_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HinsMsg_
{
  using Type = HinsMsg_<ContainerAllocator>;

  explicit HinsMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area1 = false;
      this->area2 = false;
      this->area3 = false;
      this->success = false;
    }
  }

  explicit HinsMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area1 = false;
      this->area2 = false;
      this->area3 = false;
      this->success = false;
    }
  }

  // field types and members
  using _area1_type =
    bool;
  _area1_type area1;
  using _area2_type =
    bool;
  _area2_type area2;
  using _area3_type =
    bool;
  _area3_type area3;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__area1(
    const bool & _arg)
  {
    this->area1 = _arg;
    return *this;
  }
  Type & set__area2(
    const bool & _arg)
  {
    this->area2 = _arg;
    return *this;
  }
  Type & set__area3(
    const bool & _arg)
  {
    this->area3 = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hins_laser_interfaces__msg__HinsMsg
    std::shared_ptr<hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hins_laser_interfaces__msg__HinsMsg
    std::shared_ptr<hins_laser_interfaces::msg::HinsMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinsMsg_ & other) const
  {
    if (this->area1 != other.area1) {
      return false;
    }
    if (this->area2 != other.area2) {
      return false;
    }
    if (this->area3 != other.area3) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinsMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinsMsg_

// alias to use template instance with default allocator
using HinsMsg =
  hins_laser_interfaces::msg::HinsMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hins_laser_interfaces

#endif  // HINS_LASER_INTERFACES__MSG__DETAIL__HINS_MSG__STRUCT_HPP_
