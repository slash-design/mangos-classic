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
# with this program. If not, see <http://www.gnu.org/licenses/>.

add_subdirectory(genrev)
add_subdirectory(shared)

if(BUILD_GAME_SERVER OR BUILD_AUTH_SERVER OR BUILD_EXTRACTORS)
  add_subdirectory(framework)
endif()

# Playerbots module
if(BUILD_PLAYERBOTS)
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/modules/PlayerBots)
  message(STATUS "Using local PlayerBots module")
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/modules/PlayerBots)
else()
  message(WARNING "PlayerBots module not found in modules/PlayerBots. Skipping...")
endif()

else()
  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/modules/PlayerBots)
    message(STATUS "PlayerBots module exists, but not building. You can remove it manually if you don't need it. (rm -rf ${CMAKE_CURRENT_SOURCE_DIR}/modules/PlayerBots)")

    #file(REMOVE_RECURSE ${CMAKE_CURRENT_SOURCE_DIR}/modules/PlayerBots)
  endif()
endif()

if(BUILD_GAME_SERVER)
  add_subdirectory(game)
  add_subdirectory(worldserver)
endif()

if(BUILD_AUTH_SERVER)
  add_subdirectory(authserver)
endif()