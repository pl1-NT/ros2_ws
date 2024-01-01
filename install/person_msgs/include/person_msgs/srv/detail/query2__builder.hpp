// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from person_msgs:srv/Query2.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY2__BUILDER_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY2__BUILDER_HPP_

#include "person_msgs/srv/detail/query2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query2_Request_birthmonth
{
public:
  Init_Query2_Request_birthmonth()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::person_msgs::srv::Query2_Request birthmonth(::person_msgs::srv::Query2_Request::_birthmonth_type arg)
  {
    msg_.birthmonth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query2_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query2_Request>()
{
  return person_msgs::srv::builder::Init_Query2_Request_birthmonth();
}

}  // namespace person_msgs


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query2_Response_birthstone
{
public:
  Init_Query2_Response_birthstone()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::person_msgs::srv::Query2_Response birthstone(::person_msgs::srv::Query2_Response::_birthstone_type arg)
  {
    msg_.birthstone = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query2_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query2_Response>()
{
  return person_msgs::srv::builder::Init_Query2_Response_birthstone();
}

}  // namespace person_msgs

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY2__BUILDER_HPP_
