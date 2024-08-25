//
// Created by Ramil on 24.08.2024.
//

#ifndef FIRSTPETPR_POINTERFUNCTIONCLASSEXAMPLE_H
#define FIRSTPETPR_POINTERFUNCTIONCLASSEXAMPLE_H


#include <string>
#include <iostream>

class PointerFunctionClassExample {

public:
    [[nodiscard]]int sub(int a, int b) {
        return a - b;
    }
};


#endif //FIRSTPETPR_POINTERFUNCTIONCLASSEXAMPLE_H
