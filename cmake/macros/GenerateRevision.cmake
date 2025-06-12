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
# You should have received a copy of the GNU General Public License along
# with this program. If not, see <http://www.gnu.org/licenses/>.

function(generate_git_revision HEADER_IN OUTPUT_DIR)
  execute_process(COMMAND git rev-parse --short HEAD
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE REV_ID
    OUTPUT_STRIP_TRAILING_WHITESPACE)

  execute_process(COMMAND git rev-parse --abbrev-ref HEAD
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE REV_BRANCH
    OUTPUT_STRIP_TRAILING_WHITESPACE)

  execute_process(COMMAND git log -1 --format=%ci
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE REV_DATE
    OUTPUT_STRIP_TRAILING_WHITESPACE)

  file(MAKE_DIRECTORY ${OUTPUT_DIR})
  configure_file(${HEADER_IN} ${OUTPUT_DIR}/revision.h @ONLY)
endfunction()
