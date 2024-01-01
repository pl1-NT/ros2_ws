// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from person_msgs:srv/Query2.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY2__STRUCT_H_
#define PERSON_MSGS__SRV__DETAIL__QUERY2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Query2 in the package person_msgs.
typedef struct person_msgs__srv__Query2_Request
{
  uint8_t birthmonth;
} person_msgs__srv__Query2_Request;

// Struct for a sequence of person_msgs__srv__Query2_Request.
typedef struct person_msgs__srv__Query2_Request__Sequence
{
  person_msgs__srv__Query2_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} person_msgs__srv__Query2_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'birthstone'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Query2 in the package person_msgs.
typedef struct person_msgs__srv__Query2_Response
{
  rosidl_runtime_c__String birthstone;
} person_msgs__srv__Query2_Response;

// Struct for a sequence of person_msgs__srv__Query2_Response.
typedef struct person_msgs__srv__Query2_Response__Sequence
{
  person_msgs__srv__Query2_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} person_msgs__srv__Query2_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY2__STRUCT_H_
