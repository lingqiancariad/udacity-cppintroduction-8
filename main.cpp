#include <iostream>
#include "utils.h"

int main() {
    std::cout << "=== main.cpp ===\n";

    // External Linkage
    incrementExternal();
    incrementExternal();
    std::cout << "[main] externalCounter = " << externalCounter << "\n";

    // Direct call access of internal symbols --> Will FAIL!!!
    //incrementInternal();
    //incrementAnon();        
    //std::cout << internalCounter; 
    //std::cout << anonCounter;    

    // External linkage, but have access to internal linkages in utils.cpp
    incrementInternalVariables();

    return 0;
}
