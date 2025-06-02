/*
 * This file is part of the DestinyCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BUILDINFO_H
#define BUILDINFO_H

#include <vector>
#include <string>

namespace BuildInfo {

    // Struktur zur Speicherung von Build-Nummern
    struct BuildVersion {
        std::string version;
        std::vector<int> buildNumbers;
    };

    // Funktion zur Rückgabe der Build-Versionen
    const std::vector<BuildVersion>& getBuildVersions();

    // Funktion zur Rückgabe der Build-Nummern für eine bestimmte Version
    const std::vector<int>& getBuildNumbers(const std::string& version);

} // namespace BuildInfo

#endif // BUILDINFO_H