// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__NUM__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__NUM__TRAITS_HPP_

#include "rosbridge_test_msgs/msg/num__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::msg::Num>()
{
  return "rosbridge_test_msgs::msg::Num";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbridge_test_msgs::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__MSG__NUM__TRAITS_HPP_
