// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosapi_msgs:srv/NodeDetails.idl
// generated code does not contain a copyright notice
#include "rosapi_msgs/srv/node_details__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosapi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosapi_msgs/srv/node_details__struct.h"
#include "rosapi_msgs/srv/node_details__functions.h"
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

#include "rosidl_generator_c/string.h"  // node
#include "rosidl_generator_c/string_functions.h"  // node

// forward declare type support functions


using _NodeDetails_Request__ros_msg_type = rosapi_msgs__srv__NodeDetails_Request;

static bool _NodeDetails_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeDetails_Request__ros_msg_type * ros_message = static_cast<const _NodeDetails_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node
  {
    const rosidl_generator_c__String * str = &ros_message->node;
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

  return true;
}

static bool _NodeDetails_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeDetails_Request__ros_msg_type * ros_message = static_cast<_NodeDetails_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node.data) {
      rosidl_generator_c__String__init(&ros_message->node);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->node,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t get_serialized_size_rosapi_msgs__srv__NodeDetails_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeDetails_Request__ros_msg_type * ros_message = static_cast<const _NodeDetails_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _NodeDetails_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosapi_msgs__srv__NodeDetails_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t max_serialized_size_rosapi_msgs__srv__NodeDetails_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: node
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeDetails_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosapi_msgs__srv__NodeDetails_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeDetails_Request = {
  "rosapi_msgs::srv",
  "NodeDetails_Request",
  _NodeDetails_Request__cdr_serialize,
  _NodeDetails_Request__cdr_deserialize,
  _NodeDetails_Request__get_serialized_size,
  _NodeDetails_Request__max_serialized_size
};

static rosidl_message_type_support_t _NodeDetails_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeDetails_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, NodeDetails_Request)() {
  return &_NodeDetails_Request__type_support;
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
// #include "rosapi_msgs/srv/node_details__struct.h"
// already included above
// #include "rosapi_msgs/srv/node_details__functions.h"
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

// already included above
// #include "rosidl_generator_c/string.h"  // publishing, services, subscribing
// already included above
// #include "rosidl_generator_c/string_functions.h"  // publishing, services, subscribing

// forward declare type support functions


using _NodeDetails_Response__ros_msg_type = rosapi_msgs__srv__NodeDetails_Response;

static bool _NodeDetails_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeDetails_Response__ros_msg_type * ros_message = static_cast<const _NodeDetails_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: subscribing
  {
    size_t size = ros_message->subscribing.size;
    auto array_ptr = ros_message->subscribing.data;
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

  // Field name: publishing
  {
    size_t size = ros_message->publishing.size;
    auto array_ptr = ros_message->publishing.data;
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

static bool _NodeDetails_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeDetails_Response__ros_msg_type * ros_message = static_cast<_NodeDetails_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: subscribing
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->subscribing.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->subscribing);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->subscribing, size)) {
      return "failed to create array for field 'subscribing'";
    }
    auto array_ptr = ros_message->subscribing.data;
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
        fprintf(stderr, "failed to assign string into field 'subscribing'\n");
        return false;
      }
    }
  }

  // Field name: publishing
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->publishing.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->publishing);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->publishing, size)) {
      return "failed to create array for field 'publishing'";
    }
    auto array_ptr = ros_message->publishing.data;
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
        fprintf(stderr, "failed to assign string into field 'publishing'\n");
        return false;
      }
    }
  }

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
size_t get_serialized_size_rosapi_msgs__srv__NodeDetails_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeDetails_Response__ros_msg_type * ros_message = static_cast<const _NodeDetails_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name subscribing
  {
    size_t array_size = ros_message->subscribing.size;
    auto array_ptr = ros_message->subscribing.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name publishing
  {
    size_t array_size = ros_message->publishing.size;
    auto array_ptr = ros_message->publishing.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
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

static uint32_t _NodeDetails_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosapi_msgs__srv__NodeDetails_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t max_serialized_size_rosapi_msgs__srv__NodeDetails_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: subscribing
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
  // member: publishing
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

static size_t _NodeDetails_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosapi_msgs__srv__NodeDetails_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeDetails_Response = {
  "rosapi_msgs::srv",
  "NodeDetails_Response",
  _NodeDetails_Response__cdr_serialize,
  _NodeDetails_Response__cdr_deserialize,
  _NodeDetails_Response__get_serialized_size,
  _NodeDetails_Response__max_serialized_size
};

static rosidl_message_type_support_t _NodeDetails_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeDetails_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, NodeDetails_Response)() {
  return &_NodeDetails_Response__type_support;
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
#include "rosapi_msgs/srv/node_details.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NodeDetails__callbacks = {
  "rosapi_msgs::srv",
  "NodeDetails",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, NodeDetails_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, NodeDetails_Response)(),
};

static rosidl_service_type_support_t NodeDetails__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NodeDetails__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, NodeDetails)() {
  return &NodeDetails__handle;
}

#if defined(__cplusplus)
}
#endif
