// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from person_msgs:srv/Query2.idl
// generated code does not contain a copyright notice
#include "person_msgs/srv/detail/query2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "person_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "person_msgs/srv/detail/query2__struct.h"
#include "person_msgs/srv/detail/query2__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Query2_Request__ros_msg_type = person_msgs__srv__Query2_Request;

static bool _Query2_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Query2_Request__ros_msg_type * ros_message = static_cast<const _Query2_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: birthmonth
  {
    cdr << ros_message->birthmonth;
  }

  return true;
}

static bool _Query2_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Query2_Request__ros_msg_type * ros_message = static_cast<_Query2_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: birthmonth
  {
    cdr >> ros_message->birthmonth;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_person_msgs
size_t get_serialized_size_person_msgs__srv__Query2_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Query2_Request__ros_msg_type * ros_message = static_cast<const _Query2_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name birthmonth
  {
    size_t item_size = sizeof(ros_message->birthmonth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Query2_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_person_msgs__srv__Query2_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_person_msgs
size_t max_serialized_size_person_msgs__srv__Query2_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: birthmonth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Query2_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_person_msgs__srv__Query2_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Query2_Request = {
  "person_msgs::srv",
  "Query2_Request",
  _Query2_Request__cdr_serialize,
  _Query2_Request__cdr_deserialize,
  _Query2_Request__get_serialized_size,
  _Query2_Request__max_serialized_size
};

static rosidl_message_type_support_t _Query2_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Query2_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query2_Request)() {
  return &_Query2_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "person_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "person_msgs/srv/detail/query2__struct.h"
// already included above
// #include "person_msgs/srv/detail/query2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // birthstone
#include "rosidl_runtime_c/string_functions.h"  // birthstone

// forward declare type support functions


using _Query2_Response__ros_msg_type = person_msgs__srv__Query2_Response;

static bool _Query2_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Query2_Response__ros_msg_type * ros_message = static_cast<const _Query2_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: birthstone
  {
    const rosidl_runtime_c__String * str = &ros_message->birthstone;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Query2_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Query2_Response__ros_msg_type * ros_message = static_cast<_Query2_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: birthstone
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->birthstone.data) {
      rosidl_runtime_c__String__init(&ros_message->birthstone);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->birthstone,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'birthstone'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_person_msgs
size_t get_serialized_size_person_msgs__srv__Query2_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Query2_Response__ros_msg_type * ros_message = static_cast<const _Query2_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name birthstone
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->birthstone.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Query2_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_person_msgs__srv__Query2_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_person_msgs
size_t max_serialized_size_person_msgs__srv__Query2_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: birthstone
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Query2_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_person_msgs__srv__Query2_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Query2_Response = {
  "person_msgs::srv",
  "Query2_Response",
  _Query2_Response__cdr_serialize,
  _Query2_Response__cdr_deserialize,
  _Query2_Response__get_serialized_size,
  _Query2_Response__max_serialized_size
};

static rosidl_message_type_support_t _Query2_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Query2_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query2_Response)() {
  return &_Query2_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "person_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "person_msgs/srv/query2.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Query2__callbacks = {
  "person_msgs::srv",
  "Query2",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query2_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query2_Response)(),
};

static rosidl_service_type_support_t Query2__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Query2__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query2)() {
  return &Query2__handle;
}

#if defined(__cplusplus)
}
#endif
