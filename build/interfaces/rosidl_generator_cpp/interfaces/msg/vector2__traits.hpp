// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__VECTOR2__TRAITS_HPP_
#define INTERFACES__MSG__VECTOR2__TRAITS_HPP_

#include "interfaces/msg/vector2__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::msg::Vector2>()
{
  return "interfaces::msg::Vector2";
}

template<>
struct has_fixed_size<interfaces::msg::Vector2>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::Vector2>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::Vector2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__VECTOR2__TRAITS_HPP_
