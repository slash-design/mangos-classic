# This file is part of the DestinyCore Project. See AUTHORS file for Copyright information
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

# ------------------------------------------------------------------------------
# Platform-specific configuration for Windows systems
# ------------------------------------------------------------------------------

if (WIN32)
  # Set Boost_ROOT from environment variable if provided
  if (DEFINED ENV{BOOST_ROOT})
    set(Boost_ROOT "$ENV{BOOST_ROOT}")
  endif()

  # Adjust Boost search hints based on MSVC toolset version
  if (DEFINED Boost_ROOT AND MSVC)
    string(LENGTH "${MSVC_TOOLSET_VERSION}" _ver_len)
    math(EXPR _major_len "${_ver_len} - 1")
    string(SUBSTRING "${MSVC_TOOLSET_VERSION}" 0 ${_major_len} _ver_major)
    string(SUBSTRING "${MSVC_TOOLSET_VERSION}" ${_major_len} -1 _ver_minor)

    file(TO_CMAKE_PATH "${Boost_ROOT}" Boost_ROOT)
    set(BOOST_SEARCH_HINTS "${Boost_ROOT}/lib${PLATFORM}-msvc-${_ver_major}.${_ver_minor}/cmake")

    unset(_ver_len)
    unset(_major_len)
    unset(_ver_major)
    unset(_ver_minor)
  endif()

  # Configure Boost usage for Windows
  set(Boost_USE_STATIC_LIBS        ON)
  set(Boost_USE_MULTITHREADED      ON)
  set(Boost_USE_STATIC_RUNTIME     OFF)
endif()

# ------------------------------------------------------------------------------
# Set required Boost version depending on platform
# ------------------------------------------------------------------------------

if (WIN32)
  set(BOOST_REQUIRED_VERSION 1.78)
else()
  set(BOOST_REQUIRED_VERSION 1.74)
endif()

message(STATUS "Using Boost version requirement: ${BOOST_REQUIRED_VERSION}")

# ------------------------------------------------------------------------------
# Find and configure Boost
# ------------------------------------------------------------------------------

find_package(Boost ${BOOST_REQUIRED_VERSION} REQUIRED
  COMPONENTS system filesystem program_options regex locale
  CONFIG
  HINTS ${BOOST_SEARCH_HINTS})

# Emit a clear error if Boost is not found and no hints are set
if (NOT Boost_FOUND)
  if (NOT DEFINED ENV{BOOST_ROOT} AND NOT DEFINED Boost_DIR AND NOT DEFINED Boost_ROOT)
    message(FATAL_ERROR "No Boost_ROOT environment variable could be found! Please set it to point to your Boost installation.")
  endif()
endif()

# ------------------------------------------------------------------------------
# Create interface target for Boost
# ------------------------------------------------------------------------------

add_library(boost INTERFACE)

# Link Boost libraries and configure include paths
target_link_libraries(boost INTERFACE ${Boost_LIBRARIES})
target_include_directories(boost INTERFACE ${Boost_INCLUDE_DIRS})

# Set common Boost-related preprocessor definitions
target_compile_definitions(boost INTERFACE
  BOOST_ALL_NO_LIB                       # Disable automatic library linking
  BOOST_CONFIG_SUPPRESS_OUTDATED_MESSAGE # Suppress outdated config warnings
  BOOST_ASIO_NO_DEPRECATED               # Disable deprecated ASIO features
  BOOST_BIND_NO_PLACEHOLDERS             # Prevent use of deprecated global placeholders
  BOOST_SYSTEM_USE_UTF8)                 # Enable UTF-8 encoding for Boost.System

# ------------------------------------------------------------------------------
# Optional: Enable Boost.Stacktrace with libbacktrace (non-Windows only)
# ------------------------------------------------------------------------------

if (WITH_BOOST_STACKTRACE AND NOT WIN32)
  message(STATUS "libbacktrace will be linked for Boost.Stacktrace support")
  include(CheckIncludeFile)

  # Check if a custom include file is defined
  if (BOOST_STACKTRACE_BACKTRACE_INCLUDE_FILE)
    check_include_file("${BOOST_STACKTRACE_BACKTRACE_INCLUDE_FILE}" HAS_BACKTRACE)
    target_compile_definitions(boost INTERFACE
      BOOST_STACKTRACE_BACKTRACE_INCLUDE_FILE=${BOOST_STACKTRACE_BACKTRACE_INCLUDE_FILE})
  else()
    check_include_file("backtrace.h" HAS_BACKTRACE)
  endif()

  # Fail if required header is not found
  if (NOT HAS_BACKTRACE)
    message(FATAL_ERROR "Required header 'backtrace.h' not found. If building with a compiler other than GCC, please specify the full path in the CMake option BOOST_STACKTRACE_BACKTRACE_INCLUDE_FILE.")
  endif()

  # Enable backtrace usage in Boost.Stacktrace
  target_compile_definitions(boost INTERFACE BOOST_STACKTRACE_USE_BACKTRACE)
  target_link_libraries(boost INTERFACE backtrace)
endif()
