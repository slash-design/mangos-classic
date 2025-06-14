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

# disable warnings for dependencies
DisableWarnings()

# overwrite target creation macro to add dependencies folder property
set(SET_DEPENDENCY_PROP TRUE)
macro(add_library _target)
    _add_library(${_target} ${ARGN})
    if (SET_DEPENDENCY_PROP)
        get_target_property(originalTarget ${_target} ALIASED_TARGET)
        if (${originalTarget} STREQUAL "originalTarget-NOTFOUND")
          if(${CMAKE_VERSION} VERSION_GREATER_EQUAL "3.19.0")
            set_target_properties(${_target} PROPERTIES FOLDER "Dependencies")
          else()
            get_target_property(link_type ${_target} TYPE)
            if (NOT link_type STREQUAL "INTERFACE_LIBRARY")
              set_target_properties(${_target} PROPERTIES FOLDER "Dependencies")
            endif()
          endif()
        endif()
    endif()
endmacro()
macro(add_executable _target)
    _add_executable(${_target} ${ARGN})
    if (SET_DEPENDENCY_PROP)
        get_target_property(originalTarget ${_target} ALIASED_TARGET)
        if (${originalTarget} STREQUAL "originalTarget-NOTFOUND")
          if(${CMAKE_VERSION} VERSION_GREATER_EQUAL "3.19.0")
            set_target_properties(${_target} PROPERTIES FOLDER "Dependencies")
          else()
            get_target_property(link_type ${_target} TYPE)
            if (NOT link_type STREQUAL "INTERFACE_LIBRARY")
              set_target_properties(${_target} PROPERTIES FOLDER "Dependencies")
            endif()
          endif()
        endif()
    endif()
endmacro()
macro(add_custom_target _target)
    _add_custom_target(${_target} ${ARGN})
    if (SET_DEPENDENCY_PROP)
        get_target_property(originalTarget ${_target} ALIASED_TARGET)
        if (${originalTarget} STREQUAL "originalTarget-NOTFOUND")
          if(${CMAKE_VERSION} VERSION_GREATER_EQUAL "3.19.0")
            set_target_properties(${_target} PROPERTIES FOLDER "Dependencies")
          else()
            get_target_property(link_type ${_target} TYPE)
            if (NOT link_type STREQUAL "INTERFACE_LIBRARY")
              set_target_properties(${_target} PROPERTIES FOLDER "Dependencies")
            endif()
          endif()
        endif()
    endif()
endmacro()
add_subdirectory(recastnavigation)
add_subdirectory(src)
if (BUILD_EXTRACTORS)
  add_subdirectory(libmpq)
endif()

if (BUILD_GAME_SERVER OR BUILD_AUTH_SERVER OR BUILD_EXTRACTORS)
  add_subdirectory(g3dlite)
  add_subdirectory(boost)
endif()

set(SET_DEPENDENCY_PROP FALSE)