// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from person_msgs:srv/Query2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "person_msgs/srv/detail/query2__rosidl_typesupport_introspection_c.h"
#include "person_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "person_msgs/srv/detail/query2__functions.h"
#include "person_msgs/srv/detail/query2__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  person_msgs__srv__Query2_Request__init(message_memory);
}

void Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_fini_function(void * message_memory)
{
  person_msgs__srv__Query2_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_message_member_array[1] = {
  {
    "birthmonth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(person_msgs__srv__Query2_Request, birthmonth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_message_members = {
  "person_msgs__srv",  // message namespace
  "Query2_Request",  // message name
  1,  // number of fields
  sizeof(person_msgs__srv__Query2_Request),
  Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_message_member_array,  // message members
  Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_message_type_support_handle = {
  0,
  &Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_person_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query2_Request)() {
  if (!Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_message_type_support_handle.typesupport_identifier) {
    Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Query2_Request__rosidl_typesupport_introspection_c__Query2_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "person_msgs/srv/detail/query2__rosidl_typesupport_introspection_c.h"
// already included above
// #include "person_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "person_msgs/srv/detail/query2__functions.h"
// already included above
// #include "person_msgs/srv/detail/query2__struct.h"


// Include directives for member types
// Member `birthstone`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  person_msgs__srv__Query2_Response__init(message_memory);
}

void Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_fini_function(void * message_memory)
{
  person_msgs__srv__Query2_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_message_member_array[1] = {
  {
    "birthstone",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(person_msgs__srv__Query2_Response, birthstone),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_message_members = {
  "person_msgs__srv",  // message namespace
  "Query2_Response",  // message name
  1,  // number of fields
  sizeof(person_msgs__srv__Query2_Response),
  Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_message_member_array,  // message members
  Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_message_type_support_handle = {
  0,
  &Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_person_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query2_Response)() {
  if (!Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_message_type_support_handle.typesupport_identifier) {
    Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Query2_Response__rosidl_typesupport_introspection_c__Query2_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "person_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "person_msgs/srv/detail/query2__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_service_members = {
  "person_msgs__srv",  // service namespace
  "Query2",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_Request_message_type_support_handle,
  NULL  // response message
  // person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_Response_message_type_support_handle
};

static rosidl_service_type_support_t person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_service_type_support_handle = {
  0,
  &person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query2_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query2_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_person_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query2)() {
  if (!person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_service_type_support_handle.typesupport_identifier) {
    person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query2_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query2_Response)()->data;
  }

  return &person_msgs__srv__detail__query2__rosidl_typesupport_introspection_c__Query2_service_type_support_handle;
}
