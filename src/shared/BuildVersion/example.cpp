#include "BuildInfo.h"
#include <iostream>

void HandleClientBuild(int clientBuild) {
    if (BuildInfo::IsBuildNumberValid(clientBuild)) {
        std::cout << "Client mit Build " << clientBuild << " ist unterstützt!\n";
        // Hier kannst du dann z.B. passende Opcode-Tabellen laden
    } else {
        std::cout << "Unbekannte Build-Nummer: " << clientBuild << "!\n";
        // Fehlermeldung, ablehnen oder Standard-Verhalten
    }
}