// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from person_msgs:srv/Query2.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY2__TRAITS_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY2__TRAITS_HPP_

#include "person_msgs/srv/detail/query2__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::srv::Query2_Request>()
{
  return "person_msgs::srv::Query2_Request";
}

template<>
inline const char * name<person_msgs::srv::Query2_Request>()
{
  return "person_msgs/srv/Query2_Request";
}

template<>
struct has_fixed_size<person_msgs::srv::Query2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<person_msgs::srv::Query2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<person_msgs::srv::Query2_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::srv::Query2_Response>()
{
  return "person_msgs::srv::Query2_Response";
}

template<>
inline const char * name<person_msgs::srv::Query2_Response>()
{
  return "person_msgs/srv/Query2_Response";
}

template<>
struct has_fixed_size<person_msgs::srv::Query2_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<person_msgs::srv::Query2_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<person_msgs::srv::Query2_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::srv::Query2>()
{
  return "person_msgs::srv::Query2";
}

template<>
inline const char * name<person_msgs::srv::Query2>()
{
  return "person_msgs/srv/Query2";
}

template<>
struct has_fixed_size<person_msgs::srv::Query2>
  : std::integral_constant<
    bool,
    has_fixed_size<person_msgs::srv::Query2_Request>::value &&
    has_fixed_size<person_msgs::srv::Query2_Response>::value
  >
{
};

template<>
struct has_bounded_size<person_msgs::srv::Query2>
  : std::integral_constant<
    bool,
    has_bounded_size<person_msgs::srv::Query2_Request>::value &&
    has_bounded_size<person_msgs::srv::Query2_Response>::value
  >
{
};

template<>
struct is_service<person_msgs::srv::Query2>
  : std::true_type
{
};

template<>
struct is_service_request<person_msgs::srv::Query2_Request>
  : std::true_type
{
};

template<>
struct is_service_response<person_msgs::srv::Query2_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY2__TRAITS_HPP_
