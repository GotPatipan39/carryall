// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hins_laser_interfaces:msg/HinsMsg.idl
// generated code does not contain a copyright notice
#include "hins_laser_interfaces/msg/detail/hins_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hins_laser_interfaces__msg__HinsMsg__init(hins_laser_interfaces__msg__HinsMsg * msg)
{
  if (!msg) {
    return false;
  }
  // area1
  // area2
  // area3
  // success
  return true;
}

void
hins_laser_interfaces__msg__HinsMsg__fini(hins_laser_interfaces__msg__HinsMsg * msg)
{
  if (!msg) {
    return;
  }
  // area1
  // area2
  // area3
  // success
}

bool
hins_laser_interfaces__msg__HinsMsg__are_equal(const hins_laser_interfaces__msg__HinsMsg * lhs, const hins_laser_interfaces__msg__HinsMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // area1
  if (lhs->area1 != rhs->area1) {
    return false;
  }
  // area2
  if (lhs->area2 != rhs->area2) {
    return false;
  }
  // area3
  if (lhs->area3 != rhs->area3) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
hins_laser_interfaces__msg__HinsMsg__copy(
  const hins_laser_interfaces__msg__HinsMsg * input,
  hins_laser_interfaces__msg__HinsMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // area1
  output->area1 = input->area1;
  // area2
  output->area2 = input->area2;
  // area3
  output->area3 = input->area3;
  // success
  output->success = input->success;
  return true;
}

hins_laser_interfaces__msg__HinsMsg *
hins_laser_interfaces__msg__HinsMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__msg__HinsMsg * msg = (hins_laser_interfaces__msg__HinsMsg *)allocator.allocate(sizeof(hins_laser_interfaces__msg__HinsMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hins_laser_interfaces__msg__HinsMsg));
  bool success = hins_laser_interfaces__msg__HinsMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hins_laser_interfaces__msg__HinsMsg__destroy(hins_laser_interfaces__msg__HinsMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hins_laser_interfaces__msg__HinsMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hins_laser_interfaces__msg__HinsMsg__Sequence__init(hins_laser_interfaces__msg__HinsMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__msg__HinsMsg * data = NULL;

  if (size) {
    data = (hins_laser_interfaces__msg__HinsMsg *)allocator.zero_allocate(size, sizeof(hins_laser_interfaces__msg__HinsMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hins_laser_interfaces__msg__HinsMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hins_laser_interfaces__msg__HinsMsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hins_laser_interfaces__msg__HinsMsg__Sequence__fini(hins_laser_interfaces__msg__HinsMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hins_laser_interfaces__msg__HinsMsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hins_laser_interfaces__msg__HinsMsg__Sequence *
hins_laser_interfaces__msg__HinsMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__msg__HinsMsg__Sequence * array = (hins_laser_interfaces__msg__HinsMsg__Sequence *)allocator.allocate(sizeof(hins_laser_interfaces__msg__HinsMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hins_laser_interfaces__msg__HinsMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hins_laser_interfaces__msg__HinsMsg__Sequence__destroy(hins_laser_interfaces__msg__HinsMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hins_laser_interfaces__msg__HinsMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hins_laser_interfaces__msg__HinsMsg__Sequence__are_equal(const hins_laser_interfaces__msg__HinsMsg__Sequence * lhs, const hins_laser_interfaces__msg__HinsMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hins_laser_interfaces__msg__HinsMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hins_laser_interfaces__msg__HinsMsg__Sequence__copy(
  const hins_laser_interfaces__msg__HinsMsg__Sequence * input,
  hins_laser_interfaces__msg__HinsMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hins_laser_interfaces__msg__HinsMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hins_laser_interfaces__msg__HinsMsg * data =
      (hins_laser_interfaces__msg__HinsMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hins_laser_interfaces__msg__HinsMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hins_laser_interfaces__msg__HinsMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hins_laser_interfaces__msg__HinsMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
