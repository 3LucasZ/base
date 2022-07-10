// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:srv/TestNestedService.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__TEST_NESTED_SERVICE__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__TEST_NESTED_SERVICE__TRAITS_HPP_

#include "rosbridge_test_msgs/srv/test_nested_service__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::srv::TestNestedService_Request>()
{
  return "rosbridge_test_msgs::srv::TestNestedService_Request";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::srv::TestNestedService_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::srv::TestNestedService_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<rosbridge_test_msgs::srv::TestNestedService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/float64__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::srv::TestNestedService_Response>()
{
  return "rosbridge_test_msgs::srv::TestNestedService_Response";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::srv::TestNestedService_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::srv::TestNestedService_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<rosbridge_test_msgs::srv::TestNestedService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::srv::TestNestedService>()
{
  return "rosbridge_test_msgs::srv::TestNestedService";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::srv::TestNestedService>
  : std::integral_constant<
    bool,
    has_fixed_size<rosbridge_test_msgs::srv::TestNestedService_Request>::value &&
    has_fixed_size<rosbridge_test_msgs::srv::TestNestedService_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosbridge_test_msgs::srv::TestNestedService>
  : std::integral_constant<
    bool,
    has_bounded_size<rosbridge_test_msgs::srv::TestNestedService_Request>::value &&
    has_bounded_size<rosbridge_test_msgs::srv::TestNestedService_Response>::value
  >
{
};

template<>
struct is_service<rosbridge_test_msgs::srv::TestNestedService>
  : std::true_type
{
};

template<>
struct is_service_request<rosbridge_test_msgs::srv::TestNestedService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosbridge_test_msgs::srv::TestNestedService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__SRV__TEST_NESTED_SERVICE__TRAITS_HPP_
