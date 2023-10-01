// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_custom_multi_dep_pkg_test __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_multi_custom_multi_dep_pkg_test __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_custom_multi_dep_pkg_test __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_multi_custom_multi_dep_pkg_test __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_multi_custom_multi_dep_pkg_test
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_multi_custom_multi_dep_pkg_test ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_custom_multi_dep_pkg_test
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_multi_custom_multi_dep_pkg_test ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_multi_custom_multi_dep_pkg_test
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_custom_multi_dep_pkg_test __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_multi_custom_multi_dep_pkg_test
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_multi_custom_multi_dep_pkg_test __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_multi_custom_multi_dep_pkg_test
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // MULTI_CUSTOM_MULTI_DEP_PKG_TEST__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
