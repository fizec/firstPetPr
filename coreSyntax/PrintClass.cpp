//
// Created by Ramil on 24.08.2024.
//

#include "PrintClass.h"

void PrintClass::printResult(int a, int b, int (PointerFunctionClassExample::*pFunction)(int, int),
                             PointerFunctionClassExample &pf) {
    std::cout << "PRINT RESULT FROM OTHER FUNCTION: " << (pf.*pFunction)(a, b) << std::endl;
}
