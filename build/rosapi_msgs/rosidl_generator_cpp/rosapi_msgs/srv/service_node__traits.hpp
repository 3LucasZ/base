// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:srv/ServiceNode.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__SERVICE_NODE__TRAITS_HPP_
#define ROSAPI_MSGS__SRV__SERVICE_NODE__TRAITS_HPP_

#include "rosapi_msgs/srv/service_node__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceNode_Request>()
{
  return "rosapi_msgs::srv::ServiceNode_Request";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceNode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceNode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::ServiceNode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceNode_Response>()
{
  return "rosapi_msgs::srv::ServiceNode_Response";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceNode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceNode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::ServiceNode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceNode>()
{
  return "rosapi_msgs::srv::ServiceNode";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceNode>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi_msgs::srv::ServiceNode_Request>::value &&
    has_fixed_size<rosapi_msgs::srv::ServiceNode_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceNode>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi_msgs::srv::ServiceNode_Request>::value &&
    has_bounded_size<rosapi_msgs::srv::ServiceNode_Response>::value
  >
{
};

template<>
struct is_service<rosapi_msgs::srv::ServiceNode>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi_msgs::srv::ServiceNode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi_msgs::srv::ServiceNode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__SRV__SERVICE_NODE__TRAITS_HPP_
