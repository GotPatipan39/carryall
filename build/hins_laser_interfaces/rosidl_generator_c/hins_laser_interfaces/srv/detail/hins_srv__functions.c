// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hins_laser_interfaces:srv/HinsSrv.idl
// generated code does not contain a copyright notice
#include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hins_laser_interfaces__srv__HinsSrv_Request__init(hins_laser_interfaces__srv__HinsSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // channel
  return true;
}

void
hins_laser_interfaces__srv__HinsSrv_Request__fini(hins_laser_interfaces__srv__HinsSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // channel
}

bool
hins_laser_interfaces__srv__HinsSrv_Request__are_equal(const hins_laser_interfaces__srv__HinsSrv_Request * lhs, const hins_laser_interfaces__srv__HinsSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // channel
  if (lhs->channel != rhs->channel) {
    return false;
  }
  return true;
}

bool
hins_laser_interfaces__srv__HinsSrv_Request__copy(
  const hins_laser_interfaces__srv__HinsSrv_Request * input,
  hins_laser_interfaces__srv__HinsSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // channel
  output->channel = input->channel;
  return true;
}

hins_laser_interfaces__srv__HinsSrv_Request *
hins_laser_interfaces__srv__HinsSrv_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Request * msg = (hins_laser_interfaces__srv__HinsSrv_Request *)allocator.allocate(sizeof(hins_laser_interfaces__srv__HinsSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hins_laser_interfaces__srv__HinsSrv_Request));
  bool success = hins_laser_interfaces__srv__HinsSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hins_laser_interfaces__srv__HinsSrv_Request__destroy(hins_laser_interfaces__srv__HinsSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hins_laser_interfaces__srv__HinsSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hins_laser_interfaces__srv__HinsSrv_Request__Sequence__init(hins_laser_interfaces__srv__HinsSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Request * data = NULL;

  if (size) {
    data = (hins_laser_interfaces__srv__HinsSrv_Request *)allocator.zero_allocate(size, sizeof(hins_laser_interfaces__srv__HinsSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hins_laser_interfaces__srv__HinsSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hins_laser_interfaces__srv__HinsSrv_Request__fini(&data[i - 1]);
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
hins_laser_interfaces__srv__HinsSrv_Request__Sequence__fini(hins_laser_interfaces__srv__HinsSrv_Request__Sequence * array)
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
      hins_laser_interfaces__srv__HinsSrv_Request__fini(&array->data[i]);
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

hins_laser_interfaces__srv__HinsSrv_Request__Sequence *
hins_laser_interfaces__srv__HinsSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Request__Sequence * array = (hins_laser_interfaces__srv__HinsSrv_Request__Sequence *)allocator.allocate(sizeof(hins_laser_interfaces__srv__HinsSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hins_laser_interfaces__srv__HinsSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hins_laser_interfaces__srv__HinsSrv_Request__Sequence__destroy(hins_laser_interfaces__srv__HinsSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hins_laser_interfaces__srv__HinsSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hins_laser_interfaces__srv__HinsSrv_Request__Sequence__are_equal(const hins_laser_interfaces__srv__HinsSrv_Request__Sequence * lhs, const hins_laser_interfaces__srv__HinsSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hins_laser_interfaces__srv__HinsSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hins_laser_interfaces__srv__HinsSrv_Request__Sequence__copy(
  const hins_laser_interfaces__srv__HinsSrv_Request__Sequence * input,
  hins_laser_interfaces__srv__HinsSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hins_laser_interfaces__srv__HinsSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hins_laser_interfaces__srv__HinsSrv_Request * data =
      (hins_laser_interfaces__srv__HinsSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hins_laser_interfaces__srv__HinsSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hins_laser_interfaces__srv__HinsSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hins_laser_interfaces__srv__HinsSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hins_laser_interfaces__srv__HinsSrv_Response__init(hins_laser_interfaces__srv__HinsSrv_Response * msg)
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
hins_laser_interfaces__srv__HinsSrv_Response__fini(hins_laser_interfaces__srv__HinsSrv_Response * msg)
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
hins_laser_interfaces__srv__HinsSrv_Response__are_equal(const hins_laser_interfaces__srv__HinsSrv_Response * lhs, const hins_laser_interfaces__srv__HinsSrv_Response * rhs)
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
hins_laser_interfaces__srv__HinsSrv_Response__copy(
  const hins_laser_interfaces__srv__HinsSrv_Response * input,
  hins_laser_interfaces__srv__HinsSrv_Response * output)
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

hins_laser_interfaces__srv__HinsSrv_Response *
hins_laser_interfaces__srv__HinsSrv_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Response * msg = (hins_laser_interfaces__srv__HinsSrv_Response *)allocator.allocate(sizeof(hins_laser_interfaces__srv__HinsSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hins_laser_interfaces__srv__HinsSrv_Response));
  bool success = hins_laser_interfaces__srv__HinsSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hins_laser_interfaces__srv__HinsSrv_Response__destroy(hins_laser_interfaces__srv__HinsSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hins_laser_interfaces__srv__HinsSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hins_laser_interfaces__srv__HinsSrv_Response__Sequence__init(hins_laser_interfaces__srv__HinsSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Response * data = NULL;

  if (size) {
    data = (hins_laser_interfaces__srv__HinsSrv_Response *)allocator.zero_allocate(size, sizeof(hins_laser_interfaces__srv__HinsSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hins_laser_interfaces__srv__HinsSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hins_laser_interfaces__srv__HinsSrv_Response__fini(&data[i - 1]);
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
hins_laser_interfaces__srv__HinsSrv_Response__Sequence__fini(hins_laser_interfaces__srv__HinsSrv_Response__Sequence * array)
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
      hins_laser_interfaces__srv__HinsSrv_Response__fini(&array->data[i]);
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

hins_laser_interfaces__srv__HinsSrv_Response__Sequence *
hins_laser_interfaces__srv__HinsSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Response__Sequence * array = (hins_laser_interfaces__srv__HinsSrv_Response__Sequence *)allocator.allocate(sizeof(hins_laser_interfaces__srv__HinsSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hins_laser_interfaces__srv__HinsSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hins_laser_interfaces__srv__HinsSrv_Response__Sequence__destroy(hins_laser_interfaces__srv__HinsSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hins_laser_interfaces__srv__HinsSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hins_laser_interfaces__srv__HinsSrv_Response__Sequence__are_equal(const hins_laser_interfaces__srv__HinsSrv_Response__Sequence * lhs, const hins_laser_interfaces__srv__HinsSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hins_laser_interfaces__srv__HinsSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hins_laser_interfaces__srv__HinsSrv_Response__Sequence__copy(
  const hins_laser_interfaces__srv__HinsSrv_Response__Sequence * input,
  hins_laser_interfaces__srv__HinsSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hins_laser_interfaces__srv__HinsSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hins_laser_interfaces__srv__HinsSrv_Response * data =
      (hins_laser_interfaces__srv__HinsSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hins_laser_interfaces__srv__HinsSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hins_laser_interfaces__srv__HinsSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hins_laser_interfaces__srv__HinsSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "hins_laser_interfaces/srv/detail/hins_srv__functions.h"

bool
hins_laser_interfaces__srv__HinsSrv_Event__init(hins_laser_interfaces__srv__HinsSrv_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hins_laser_interfaces__srv__HinsSrv_Event__fini(msg);
    return false;
  }
  // request
  if (!hins_laser_interfaces__srv__HinsSrv_Request__Sequence__init(&msg->request, 0)) {
    hins_laser_interfaces__srv__HinsSrv_Event__fini(msg);
    return false;
  }
  // response
  if (!hins_laser_interfaces__srv__HinsSrv_Response__Sequence__init(&msg->response, 0)) {
    hins_laser_interfaces__srv__HinsSrv_Event__fini(msg);
    return false;
  }
  return true;
}

void
hins_laser_interfaces__srv__HinsSrv_Event__fini(hins_laser_interfaces__srv__HinsSrv_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hins_laser_interfaces__srv__HinsSrv_Request__Sequence__fini(&msg->request);
  // response
  hins_laser_interfaces__srv__HinsSrv_Response__Sequence__fini(&msg->response);
}

bool
hins_laser_interfaces__srv__HinsSrv_Event__are_equal(const hins_laser_interfaces__srv__HinsSrv_Event * lhs, const hins_laser_interfaces__srv__HinsSrv_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!hins_laser_interfaces__srv__HinsSrv_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hins_laser_interfaces__srv__HinsSrv_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hins_laser_interfaces__srv__HinsSrv_Event__copy(
  const hins_laser_interfaces__srv__HinsSrv_Event * input,
  hins_laser_interfaces__srv__HinsSrv_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!hins_laser_interfaces__srv__HinsSrv_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hins_laser_interfaces__srv__HinsSrv_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hins_laser_interfaces__srv__HinsSrv_Event *
hins_laser_interfaces__srv__HinsSrv_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Event * msg = (hins_laser_interfaces__srv__HinsSrv_Event *)allocator.allocate(sizeof(hins_laser_interfaces__srv__HinsSrv_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hins_laser_interfaces__srv__HinsSrv_Event));
  bool success = hins_laser_interfaces__srv__HinsSrv_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hins_laser_interfaces__srv__HinsSrv_Event__destroy(hins_laser_interfaces__srv__HinsSrv_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hins_laser_interfaces__srv__HinsSrv_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hins_laser_interfaces__srv__HinsSrv_Event__Sequence__init(hins_laser_interfaces__srv__HinsSrv_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Event * data = NULL;

  if (size) {
    data = (hins_laser_interfaces__srv__HinsSrv_Event *)allocator.zero_allocate(size, sizeof(hins_laser_interfaces__srv__HinsSrv_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hins_laser_interfaces__srv__HinsSrv_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hins_laser_interfaces__srv__HinsSrv_Event__fini(&data[i - 1]);
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
hins_laser_interfaces__srv__HinsSrv_Event__Sequence__fini(hins_laser_interfaces__srv__HinsSrv_Event__Sequence * array)
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
      hins_laser_interfaces__srv__HinsSrv_Event__fini(&array->data[i]);
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

hins_laser_interfaces__srv__HinsSrv_Event__Sequence *
hins_laser_interfaces__srv__HinsSrv_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hins_laser_interfaces__srv__HinsSrv_Event__Sequence * array = (hins_laser_interfaces__srv__HinsSrv_Event__Sequence *)allocator.allocate(sizeof(hins_laser_interfaces__srv__HinsSrv_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hins_laser_interfaces__srv__HinsSrv_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hins_laser_interfaces__srv__HinsSrv_Event__Sequence__destroy(hins_laser_interfaces__srv__HinsSrv_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hins_laser_interfaces__srv__HinsSrv_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hins_laser_interfaces__srv__HinsSrv_Event__Sequence__are_equal(const hins_laser_interfaces__srv__HinsSrv_Event__Sequence * lhs, const hins_laser_interfaces__srv__HinsSrv_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hins_laser_interfaces__srv__HinsSrv_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hins_laser_interfaces__srv__HinsSrv_Event__Sequence__copy(
  const hins_laser_interfaces__srv__HinsSrv_Event__Sequence * input,
  hins_laser_interfaces__srv__HinsSrv_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hins_laser_interfaces__srv__HinsSrv_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hins_laser_interfaces__srv__HinsSrv_Event * data =
      (hins_laser_interfaces__srv__HinsSrv_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hins_laser_interfaces__srv__HinsSrv_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hins_laser_interfaces__srv__HinsSrv_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hins_laser_interfaces__srv__HinsSrv_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
