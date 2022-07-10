// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosbridge_msgs:msg/ConnectedClient.idl
// generated code does not contain a copyright notice
#include "rosbridge_msgs/msg/connected_client__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosbridge_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosbridge_msgs/msg/connected_client__struct.h"
#include "rosbridge_msgs/msg/connected_client__functions.h"
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

#include "builtin_interfaces/msg/time__functions.h"  // connection_time
#include "rosidl_generator_c/string.h"  // ip_address
#include "rosidl_generator_c/string_functions.h"  // ip_address

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosbridge_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosbridge_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosbridge_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _ConnectedClient__ros_msg_type = rosbridge_msgs__msg__ConnectedClient;

static bool _ConnectedClient__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConnectedClient__ros_msg_type * ros_message = static_cast<const _ConnectedClient__ros_msg_type *>(untyped_ros_message);
  // Field name: ip_address
  {
    const rosidl_generator_c__String * str = &ros_message->ip_address;
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

  // Field name: connection_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->connection_time, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ConnectedClient__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConnectedClient__ros_msg_type * ros_message = static_cast<_ConnectedClient__ros_msg_type *>(untyped_ros_message);
  // Field name: ip_address
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ip_address.data) {
      rosidl_generator_c__String__init(&ros_message->ip_address);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->ip_address,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ip_address'\n");
      return false;
    }
  }

  // Field name: connection_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->connection_time))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbridge_msgs
size_t get_serialized_size_rosbridge_msgs__msg__ConnectedClient(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConnectedClient__ros_msg_type * ros_message = static_cast<const _ConnectedClient__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ip_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ip_address.size + 1);
  // field.name connection_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->connection_time), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ConnectedClient__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosbridge_msgs__msg__ConnectedClient(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbridge_msgs
size_t max_serialized_size_rosbridge_msgs__msg__ConnectedClient(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ip_address
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: connection_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ConnectedClient__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosbridge_msgs__msg__ConnectedClient(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConnectedClient = {
  "rosbridge_msgs::msg",
  "ConnectedClient",
  _ConnectedClient__cdr_serialize,
  _ConnectedClient__cdr_deserialize,
  _ConnectedClient__get_serialized_size,
  _ConnectedClient__max_serialized_size
};

static rosidl_message_type_support_t _ConnectedClient__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConnectedClient,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbridge_msgs, msg, ConnectedClient)() {
  return &_ConnectedClient__type_support;
}

#if defined(__cplusplus)
}
#endif
