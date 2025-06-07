#
# This file is part of the DestinyCore Project. See AUTHORS file for copyright information.
#
# This program is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the
# Free Software Foundation; either version 2 of the License, or (at your
# option) any later version.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
# more details.
#
# This file contains code derived from the CMaNGOS Project (https://github.com/cmangos)
# and retains portions originally authored by the CMaNGOS Developers. See the AUTHORS file
# for detailed attribution.
#
# You should have received a copy of the GNU General Public License along
# with this program. If not, see <http://www.gnu.org/licenses/>

set(EXECUTABLE_NAME ${BINARY_AUTH_SERVER_NAME})

# Local source files (from src/authserver only)
set(LOCAL_AUTH_SRCS
    AuthCodes.h
    AuthSocket.cpp
    AuthSocket.h
    Main.cpp
    RealmList.cpp
    RealmList.h
)

set(EXECUTABLE_SRCS ${LOCAL_AUTH_SRCS})

# Platform-specific files
if(WIN32)
  list(APPEND EXECUTABLE_SRCS authserver.rc)
endif()

# Visual Studio source grouping
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${LOCAL_AUTH_SRCS})

if(WIN32)
  source_group("" FILES authserver.rc)
endif()

# Define the executable
add_executable(${EXECUTABLE_NAME}
  ${EXECUTABLE_SRCS}
)

# Link libraries
target_link_libraries(${EXECUTABLE_NAME}
  shared
)

# Windows-only linking and post-build
if(WIN32)
  if(MSVC)
    target_link_libraries(${EXECUTABLE_NAME}
      dbghelp
    )
  endif()

  if(MINGW)
    target_link_libraries(${EXECUTABLE_NAME}
      wsock32
      ws2_32
    )
  endif()

  # Output and working directory
  set_target_properties(${EXECUTABLE_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${DEV_BIN_DIR}"
    VS_DEBUGGER_WORKING_DIRECTORY "${DEV_BIN_DIR}"
  )

  # Copy config file after build
  add_custom_command(TARGET ${EXECUTABLE_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
      "${CMAKE_CURRENT_SOURCE_DIR}/authserver.conf.dist.in"
      "$<TARGET_FILE_DIR:${EXECUTABLE_NAME}>/authserver.conf.dist"
  )
endif()

# Platform-specific linker flags
set(EXECUTABLE_LINK_FLAGS "")
if(UNIX)
  set(EXECUTABLE_LINK_FLAGS "-pthread ${EXECUTABLE_LINK_FLAGS}")
endif()
if(APPLE)
  set(EXECUTABLE_LINK_FLAGS "-framework Carbon ${EXECUTABLE_LINK_FLAGS}")
endif()
set_target_properties(${EXECUTABLE_NAME} PROPERTIES LINK_FLAGS "${EXECUTABLE_LINK_FLAGS}")

# Installation
if(NOT WIN32)
  install(FILES run-authserver DESTINATION ${BIN_DIR})
endif()

install(TARGETS ${EXECUTABLE_NAME} DESTINATION ${BIN_DIR})
install(FILES authserver.conf.dist.in DESTINATION ${CONF_DIR} RENAME authserver.conf.dist)

if(MSVC)
  install(FILES $<TARGET_PDB_FILE:${EXECUTABLE_NAME}> DESTINATION ${BIN_DIR} CONFIGURATIONS Debug)
endif()
