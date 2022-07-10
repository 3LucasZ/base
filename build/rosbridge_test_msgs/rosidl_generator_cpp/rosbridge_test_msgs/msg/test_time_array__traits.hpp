// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:msg/TestTimeArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__TEST_TIME_ARRAY__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__TEST_TIME_ARRAY__TRAITS_HPP_

#include "rosbridge_test_msgs/msg/test_time_array__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::msg::TestTimeArray>()
{
  return "rosbridge_test_msgs::msg::TestTimeArray";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::msg::TestTimeArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::msg::TestTimeArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosbridge_test_msgs::msg::TestTimeArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__MSG__TEST_TIME_ARRAY__TRAITS_HPP_
