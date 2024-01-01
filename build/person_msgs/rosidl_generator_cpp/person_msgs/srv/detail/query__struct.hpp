// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__person_msgs__srv__Query_Request __attribute__((deprecated))
#else
# define DEPRECATED__person_msgs__srv__Query_Request __declspec(deprecated)
#endif

namespace person_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Query_Request_
{
  using Type = Query_Request_<ContainerAllocator>;

  explicit Query_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->birthmonth = 0;
    }
  }

  explicit Query_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->birthmonth = 0;
    }
  }

  // field types and members
  using _birthmonth_type =
    uint8_t;
  _birthmonth_type birthmonth;

  // setters for named parameter idiom
  Type & set__birthmonth(
    const uint8_t & _arg)
  {
    this->birthmonth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    person_msgs::srv::Query_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const person_msgs::srv::Query_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<person_msgs::srv::Query_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<person_msgs::srv::Query_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      person_msgs::srv::Query_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<person_msgs::srv::Query_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      person_msgs::srv::Query_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<person_msgs::srv::Query_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<person_msgs::srv::Query_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<person_msgs::srv::Query_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__person_msgs__srv__Query_Request
    std::shared_ptr<person_msgs::srv::Query_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__person_msgs__srv__Query_Request
    std::shared_ptr<person_msgs::srv::Query_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Query_Request_ & other) const
  {
    if (this->birthmonth != other.birthmonth) {
      return false;
    }
    return true;
  }
  bool operator!=(const Query_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Query_Request_

// alias to use template instance with default allocator
using Query_Request =
  person_msgs::srv::Query_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace person_msgs


#ifndef _WIN32
# define DEPRECATED__person_msgs__srv__Query_Response __attribute__((deprecated))
#else
# define DEPRECATED__person_msgs__srv__Query_Response __declspec(deprecated)
#endif

namespace person_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Query_Response_
{
  using Type = Query_Response_<ContainerAllocator>;

  explicit Query_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->birthstone = "";
    }
  }

  explicit Query_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : birthstone(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->birthstone = "";
    }
  }

  // field types and members
  using _birthstone_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _birthstone_type birthstone;

  // setters for named parameter idiom
  Type & set__birthstone(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->birthstone = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    person_msgs::srv::Query_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const person_msgs::srv::Query_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<person_msgs::srv::Query_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<person_msgs::srv::Query_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      person_msgs::srv::Query_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<person_msgs::srv::Query_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      person_msgs::srv::Query_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<person_msgs::srv::Query_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<person_msgs::srv::Query_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<person_msgs::srv::Query_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__person_msgs__srv__Query_Response
    std::shared_ptr<person_msgs::srv::Query_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__person_msgs__srv__Query_Response
    std::shared_ptr<person_msgs::srv::Query_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Query_Response_ & other) const
  {
    if (this->birthstone != other.birthstone) {
      return false;
    }
    return true;
  }
  bool operator!=(const Query_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Query_Response_

// alias to use template instance with default allocator
using Query_Response =
  person_msgs::srv::Query_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace person_msgs

namespace person_msgs
{

namespace srv
{

struct Query
{
  using Request = person_msgs::srv::Query_Request;
  using Response = person_msgs::srv::Query_Response;
};

}  // namespace srv

}  // namespace person_msgs

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_HPP_
