// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice

#include "hins_laser_interfaces/msg/detail/hins_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hins_laser_interfaces
const rosidl_type_hash_t *
hins_laser_interfaces__msg__HinsMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x08, 0xcc, 0x96, 0xce, 0xe5, 0x9b, 0x21,
      0xb7, 0x21, 0xaf, 0xf7, 0x4f, 0xa9, 0x79, 0xf9,
      0xa2, 0xea, 0x4a, 0xc1, 0xf1, 0xa4, 0x11, 0x3c,
      0x27, 0xcc, 0x1e, 0x52, 0x5d, 0x5e, 0x4c, 0x23,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hins_laser_interfaces__msg__HinsMsg__TYPE_NAME[] = "hins_laser_interfaces/msg/HinsMsg";

// Define type names, field names, and default values
static char hins_laser_interfaces__msg__HinsMsg__FIELD_NAME__area1[] = "area1";
static char hins_laser_interfaces__msg__HinsMsg__FIELD_NAME__area2[] = "area2";
static char hins_laser_interfaces__msg__HinsMsg__FIELD_NAME__area3[] = "area3";
static char hins_laser_interfaces__msg__HinsMsg__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field hins_laser_interfaces__msg__HinsMsg__FIELDS[] = {
  {
    {hins_laser_interfaces__msg__HinsMsg__FIELD_NAME__area1, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hins_laser_interfaces__msg__HinsMsg__FIELD_NAME__area2, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hins_laser_interfaces__msg__HinsMsg__FIELD_NAME__area3, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hins_laser_interfaces__msg__HinsMsg__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hins_laser_interfaces__msg__HinsMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hins_laser_interfaces__msg__HinsMsg__TYPE_NAME, 33, 33},
      {hins_laser_interfaces__msg__HinsMsg__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool area1\n"
  "bool area2\n"
  "bool area3\n"
  "bool success";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hins_laser_interfaces__msg__HinsMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hins_laser_interfaces__msg__HinsMsg__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hins_laser_interfaces__msg__HinsMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hins_laser_interfaces__msg__HinsMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
