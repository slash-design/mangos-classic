#
# This file is part of the CMaNGOS Project. See AUTHORS file for Copyright information
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#

set(EXECUTABLE_NAME ${CMANGOS_BINARY_SERVER_NAME})

set(EXECUTABLE_SRCS
    CliRunnable.cpp
    CliRunnable.h
    MaNGOSsoap.cpp
    MaNGOSsoap.h
    Main.cpp
    Master.cpp
    Master.h
    RASocket.cpp
    RASocket.h
    WorldRunnable.cpp
    WorldRunnable.h
    soapC.cpp
    soapH.h
    soapServer.cpp
    soapStub.h
)

# Windows-only: add .rc resource
if(WIN32)
  list(APPEND EXECUTABLE_SRCS mangosd.rc)
endif()

# Visual Studio source grouping
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${EXECUTABLE_SRCS})

# Define the executable
add_executable(${EXECUTABLE_NAME}
  ${EXECUTABLE_SRCS}
)

# Link to required libraries
target_link_libraries(${EXECUTABLE_NAME}
  shared
  game
  gsoap
)

# Windows-specific configuration
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

  set_target_properties(${EXECUTABLE_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${DEV_BIN_DIR}"
    VS_DEBUGGER_WORKING_DIRECTORY "${DEV_BIN_DIR}"
    PROJECT_LABEL "WorldServer"
  )

  add_custom_command(TARGET ${EXECUTABLE_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different "${CMAKE_CURRENT_SOURCE_DIR}/mangosd.conf.dist.in" "$<TARGET_FILE_DIR:${EXECUTABLE_NAME}>/mangosd.conf.dist"
  )

  add_custom_command(TARGET ${EXECUTABLE_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different "${CMAKE_SOURCE_DIR}/src/game/Anticheat/module/anticheat.conf.dist.in" "$<TARGET_FILE_DIR:${EXECUTABLE_NAME}>/anticheat.conf.dist"
  )

  add_custom_command(TARGET ${EXECUTABLE_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_SOURCE_DIR}/src/game/Anticheat/module/warden_modules/" "$<TARGET_FILE_DIR:${EXECUTABLE_NAME}>/warden_modules"
    DEPENDS ${EXECUTABLE_NAME}
  )

  if(BUILD_DEPRECATED_PLAYERBOT)
    add_custom_command(TARGET ${EXECUTABLE_NAME} POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different "${CMAKE_SOURCE_DIR}/src/game/PlayerBot/playerbot.conf.dist.in" "$<TARGET_FILE_DIR:${EXECUTABLE_NAME}>/playerbot.conf.dist"
    )
  endif()

  if(BUILD_PLAYERBOTS)
    add_custom_command(TARGET ${EXECUTABLE_NAME} POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different "${CMAKE_SOURCE_DIR}/src/modules/PlayerBots/playerbot/aiplayerbot.conf.dist.in" "$<TARGET_FILE_DIR:${EXECUTABLE_NAME}>/aiplayerbot.conf.dist"
    )
  endif()

  if(BUILD_AHBOT)
    add_custom_command(TARGET ${EXECUTABLE_NAME} POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different "${CMAKE_SOURCE_DIR}/src/game/AuctionHouseBot/ahbot.conf.dist.in" "$<TARGET_FILE_DIR:${EXECUTABLE_NAME}>/ahbot.conf.dist"
    )
  endif()
endif()

# Linker flags
set(EXECUTABLE_LINK_FLAGS "")
if(UNIX)
  if (APPLE)
    set(EXECUTABLE_LINK_FLAGS "-pthread -framework Carbon")
  else()
    set(EXECUTABLE_LINK_FLAGS "-pthread -rdynamic")
  endif()
endif()

set_target_properties(${EXECUTABLE_NAME} PROPERTIES LINK_FLAGS "${EXECUTABLE_LINK_FLAGS}")

# Install rules
if(NOT WIN32)
  install(FILES run-mangosd DESTINATION ${BIN_DIR})
endif()

install(TARGETS ${EXECUTABLE_NAME} DESTINATION ${BIN_DIR})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/mangosd.conf.dist.in ${CMAKE_CURRENT_BINARY_DIR}/mangosd.conf.dist)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/mangosd.conf.dist DESTINATION ${CONF_DIR})

if(BUILD_DEPRECATED_PLAYERBOT)
  add_definitions(-DBUILD_DEPRECATED_PLAYERBOT)
  configure_file(${CMAKE_SOURCE_DIR}/src/game/PlayerBot/playerbot.conf.dist.in ${CMAKE_CURRENT_BINARY_DIR}/playerbot.conf.dist)
  install(FILES ${CMAKE_CURRENT_BINARY_DIR}/playerbot.conf.dist DESTINATION ${CONF_DIR})
endif()

if(BUILD_AHBOT)
  configure_file(${CMAKE_SOURCE_DIR}/src/game/AuctionHouseBot/ahbot.conf.dist.in ${CMAKE_CURRENT_BINARY_DIR}/ahbot.conf.dist)
  install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ahbot.conf.dist DESTINATION ${CONF_DIR})
endif()

if(BUILD_PLAYERBOTS)
  add_definitions(-DENABLE_PLAYERBOTS)
endif()

if(MSVC)
  install(FILES $<TARGET_PDB_FILE:${EXECUTABLE_NAME}> DESTINATION ${BIN_DIR} CONFIGURATIONS Debug)
endif()

install(FILES ${CMAKE_SOURCE_DIR}/src/game/Anticheat/module/anticheat.conf.dist.in DESTINATION ${CONF_DIR} RENAME anticheat.conf.dist)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/game/Anticheat/module/warden_modules DESTINATION ${BIN_DIR})
