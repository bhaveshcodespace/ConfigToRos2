// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_single_custom_single_dep_pkg_test __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_single_custom_single_dep_pkg_test __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_single_custom_single_dep_pkg_test __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_single_custom_single_dep_pkg_test __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_single_custom_single_dep_pkg_test
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_single_custom_single_dep_pkg_test
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_single_custom_single_dep_pkg_test
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_single_custom_single_dep_pkg_test __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_single_custom_single_dep_pkg_test
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_single_custom_single_dep_pkg_test
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // SINGLE_CUSTOM_SINGLE_DEP_PKG_TEST__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_