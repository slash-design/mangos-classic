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

include(${CMAKE_SOURCE_DIR}/cmake/macros/GenerateRevision.cmake)

generate_git_revision(${CMAKE_SOURCE_DIR}/revision.h.in ${CMAKE_BINARY_DIR}/genrev)

# Damit das Header ins Projekt eingebunden wird
add_library(genrev INTERFACE)
target_include_directories(genrev INTERFACE ${CMAKE_BINARY_DIR}/genrev)
