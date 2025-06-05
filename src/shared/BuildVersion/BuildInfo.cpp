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

#include "BuildInfo.h"
#include <algorithm>

namespace BuildInfo {

    // Liste der Build-Versionen mit zugehörigen Build-Nummern
    const std::vector<BuildVersion> buildVersions = {
        {"Vanilla", {5875, 6005, 6141}},
        {"TBC", {8606}},
        {"WOTLK", {9947, 10505, 11159, 11403, 11723, 12340}},
        // Weitere Versionen hier hinzufügen...
    };

    // Gibt alle Build-Versionen zurück
    const std::vector<BuildVersion>& getBuildVersions() {
        return buildVersions;
    }

    // Gibt die Build-Nummern für eine bestimmte Version zurück
    const std::vector<int>& getBuildNumbers(const std::string& version) {
        for (const auto& buildVersion : buildVersions) {
            if (buildVersion.version == version) {
                return buildVersion.buildNumbers;
            }
        }
        static const std::vector<int> empty;
        return empty;
    }

    // Überprüft, ob eine bestimmte Buildnummer zu einer bekannten Version gehört
    bool isBuildSupported(int buildNumber) {
        for (const auto& buildVersion : buildVersions) {
            if (std::find(buildVersion.buildNumbers.begin(), buildVersion.buildNumbers.end(), buildNumber) != buildVersion.buildNumbers.end()) {
                return true;
            }
        }
        return false;
    }

} // namespace BuildInfo