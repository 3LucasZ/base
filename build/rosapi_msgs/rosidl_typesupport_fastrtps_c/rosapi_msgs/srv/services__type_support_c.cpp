// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosapi_msgs:srv/Services.idl
// generated code does not contain a copyright notice
#include "rosapi_msgs/srv/services__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosapi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosapi_msgs/srv/services__struct.h"
#include "rosapi_msgs/srv/services__functions.h"
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


// forward declare type support functions


using _Services_Request__ros_msg_type = rosapi_msgs__srv__Services_Request;

static bool _Services_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Services_Request__ros_msg_type * ros_message = static_cast<const _Services_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _Services_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Services_Request__ros_msg_type * ros_message = static_cast<_Services_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t get_serialized_size_rosapi_msgs__srv__Services_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Services_Request__ros_msg_type * ros_message = static_cast<const _Services_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Services_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosapi_msgs__srv__Services_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t max_serialized_size_rosapi_msgs__srv__Services_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Services_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosapi_msgs__srv__Services_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Services_Request = {
  "rosapi_msgs::srv",
  "Services_Request",
  _Services_Request__cdr_serialize,
  _Services_Request__cdr_deserialize,
  _Services_Request__get_serialized_size,
  _Services_Request__max_serialized_size
};

static rosidl_message_type_support_t _Services_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Services_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, Services_Request)() {
  return &_Services_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosapi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rosapi_msgs/srv/services__struct.h"
// already included above
// #include "rosapi_msgs/srv/services__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_generator_c/string.h"  // services
#include "rosidl_generator_c/string_functions.h"  // services

// forward declare type support functions


using _Services_Response__ros_msg_type = rosapi_msgs__srv__Services_Response;

static bool _Services_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Services_Response__ros_msg_type * ros_message = static_cast<const _Services_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: services
  {
    size_t size = ros_message->services.size;
    auto array_ptr = ros_message->services.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _Services_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Services_Response__ros_msg_type * ros_message = static_cast<_Services_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: services
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->services.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->services);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->services, size)) {
      return "failed to create array for field 'services'";
    }
    auto array_ptr = ros_message->services.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'services'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t get_serialized_size_rosapi_msgs__srv__Services_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Services_Response__ros_msg_type * ros_message = static_cast<const _Services_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name services
  {
    size_t array_size = ros_message->services.size;
    auto array_ptr = ros_message->services.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Services_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosapi_msgs__srv__Services_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t max_serialized_size_rosapi_msgs__srv__Services_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: services
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Services_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosapi_msgs__srv__Services_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Services_Response = {
  "rosapi_msgs::srv",
  "Services_Response",
  _Services_Response__cdr_serialize,
  _Services_Response__cdr_deserialize,
  _Services_Response__get_serialized_size,
  _Services_Response__max_serialized_size
};

static rosidl_message_type_support_t _Services_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Services_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, Services_Response)() {
  return &_Services_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosapi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosapi_msgs/srv/services.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Services__callbacks = {
  "rosapi_msgs::srv",
  "Services",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, Services_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, Services_Response)(),
};

static rosidl_service_type_support_t Services__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Services__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, Services)() {
  return &Services__handle;
}

#if defined(__cplusplus)
}
#endif
