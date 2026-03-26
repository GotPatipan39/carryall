// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hins_laser_interfaces:srv/HinsSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hins_laser_interfaces/srv/hins_srv.hpp"


#ifndef HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__STRUCT_HPP_
#define HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Request __declspec(deprecated)
#endif

namespace hins_laser_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HinsSrv_Request_
{
  using Type = HinsSrv_Request_<ContainerAllocator>;

  explicit HinsSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->channel = 0ll;
    }
  }

  explicit HinsSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->channel = 0ll;
    }
  }

  // field types and members
  using _channel_type =
    int64_t;
  _channel_type channel;

  // setters for named parameter idiom
  Type & set__channel(
    const int64_t & _arg)
  {
    this->channel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Request
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Request
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinsSrv_Request_ & other) const
  {
    if (this->channel != other.channel) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinsSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinsSrv_Request_

// alias to use template instance with default allocator
using HinsSrv_Request =
  hins_laser_interfaces::srv::HinsSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hins_laser_interfaces


#ifndef _WIN32
# define DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Response __declspec(deprecated)
#endif

namespace hins_laser_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HinsSrv_Response_
{
  using Type = HinsSrv_Response_<ContainerAllocator>;

  explicit HinsSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit HinsSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Response
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Response
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinsSrv_Response_ & other) const
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
  bool operator!=(const HinsSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinsSrv_Response_

// alias to use template instance with default allocator
using HinsSrv_Response =
  hins_laser_interfaces::srv::HinsSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hins_laser_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Event __attribute__((deprecated))
#else
# define DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Event __declspec(deprecated)
#endif

namespace hins_laser_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HinsSrv_Event_
{
  using Type = HinsSrv_Event_<ContainerAllocator>;

  explicit HinsSrv_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit HinsSrv_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hins_laser_interfaces::srv::HinsSrv_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hins_laser_interfaces::srv::HinsSrv_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Event
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hins_laser_interfaces__srv__HinsSrv_Event
    std::shared_ptr<hins_laser_interfaces::srv::HinsSrv_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinsSrv_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinsSrv_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinsSrv_Event_

// alias to use template instance with default allocator
using HinsSrv_Event =
  hins_laser_interfaces::srv::HinsSrv_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hins_laser_interfaces

namespace hins_laser_interfaces
{

namespace srv
{

struct HinsSrv
{
  using Request = hins_laser_interfaces::srv::HinsSrv_Request;
  using Response = hins_laser_interfaces::srv::HinsSrv_Response;
  using Event = hins_laser_interfaces::srv::HinsSrv_Event;
};

}  // namespace srv

}  // namespace hins_laser_interfaces

#endif  // HINS_LASER_INTERFACES__SRV__DETAIL__HINS_SRV__STRUCT_HPP_
