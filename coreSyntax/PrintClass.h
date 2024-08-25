//
// Created by Ramil on 24.08.2024.
//

#ifndef FIRSTPETPR_PRINTCLASS_H
#define FIRSTPETPR_PRINTCLASS_H


#include <iostream>
#include "PointerFunctionClassExample.h"

class PrintClass {

public:
    void printResult(int a, int b, int (PointerFunctionClassExample::*pFunction)(int, int), PointerFunctionClassExample& pf);
};


#endif //FIRSTPETPR_PRINTCLASS_H
