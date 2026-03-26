// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from hins_laser_interfaces:srv/HinsSrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hins_laser_interfaces/srv/detail/hins_srv__struct.h"
#include "hins_laser_interfaces/srv/detail/hins_srv__type_support.h"
#include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hins_laser_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _HinsSrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinsSrv_Request_type_support_ids_t;

static const _HinsSrv_Request_type_support_ids_t _HinsSrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinsSrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinsSrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinsSrv_Request_type_support_symbol_names_t _HinsSrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hins_laser_interfaces, srv, HinsSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Request)),
  }
};

typedef struct _HinsSrv_Request_type_support_data_t
{
  void * data[2];
} _HinsSrv_Request_type_support_data_t;

static _HinsSrv_Request_type_support_data_t _HinsSrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinsSrv_Request_message_typesupport_map = {
  2,
  "hins_laser_interfaces",
  &_HinsSrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HinsSrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HinsSrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinsSrv_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinsSrv_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hins_laser_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hins_laser_interfaces, srv, HinsSrv_Request)() {
  return &::hins_laser_interfaces::srv::rosidl_typesupport_c::HinsSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__struct.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__type_support.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hins_laser_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _HinsSrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinsSrv_Response_type_support_ids_t;

static const _HinsSrv_Response_type_support_ids_t _HinsSrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinsSrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinsSrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinsSrv_Response_type_support_symbol_names_t _HinsSrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hins_laser_interfaces, srv, HinsSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Response)),
  }
};

typedef struct _HinsSrv_Response_type_support_data_t
{
  void * data[2];
} _HinsSrv_Response_type_support_data_t;

static _HinsSrv_Response_type_support_data_t _HinsSrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinsSrv_Response_message_typesupport_map = {
  2,
  "hins_laser_interfaces",
  &_HinsSrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HinsSrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HinsSrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinsSrv_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinsSrv_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hins_laser_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hins_laser_interfaces, srv, HinsSrv_Response)() {
  return &::hins_laser_interfaces::srv::rosidl_typesupport_c::HinsSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__struct.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__type_support.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hins_laser_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _HinsSrv_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinsSrv_Event_type_support_ids_t;

static const _HinsSrv_Event_type_support_ids_t _HinsSrv_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinsSrv_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinsSrv_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinsSrv_Event_type_support_symbol_names_t _HinsSrv_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hins_laser_interfaces, srv, HinsSrv_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv_Event)),
  }
};

typedef struct _HinsSrv_Event_type_support_data_t
{
  void * data[2];
} _HinsSrv_Event_type_support_data_t;

static _HinsSrv_Event_type_support_data_t _HinsSrv_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinsSrv_Event_message_typesupport_map = {
  2,
  "hins_laser_interfaces",
  &_HinsSrv_Event_message_typesupport_ids.typesupport_identifier[0],
  &_HinsSrv_Event_message_typesupport_symbol_names.symbol_name[0],
  &_HinsSrv_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinsSrv_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinsSrv_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_hash,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_description,
  &hins_laser_interfaces__srv__HinsSrv_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hins_laser_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hins_laser_interfaces, srv, HinsSrv_Event)() {
  return &::hins_laser_interfaces::srv::rosidl_typesupport_c::HinsSrv_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace hins_laser_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _HinsSrv_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinsSrv_type_support_ids_t;

static const _HinsSrv_type_support_ids_t _HinsSrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinsSrv_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinsSrv_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinsSrv_type_support_symbol_names_t _HinsSrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hins_laser_interfaces, srv, HinsSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hins_laser_interfaces, srv, HinsSrv)),
  }
};

typedef struct _HinsSrv_type_support_data_t
{
  void * data[2];
} _HinsSrv_type_support_data_t;

static _HinsSrv_type_support_data_t _HinsSrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinsSrv_service_typesupport_map = {
  2,
  "hins_laser_interfaces",
  &_HinsSrv_service_typesupport_ids.typesupport_identifier[0],
  &_HinsSrv_service_typesupport_symbol_names.symbol_name[0],
  &_HinsSrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HinsSrv_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinsSrv_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &HinsSrv_Request_message_type_support_handle,
  &HinsSrv_Response_message_type_support_handle,
  &HinsSrv_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hins_laser_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hins_laser_interfaces, srv, HinsSrv)() {
  return &::hins_laser_interfaces::srv::rosidl_typesupport_c::HinsSrv_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
