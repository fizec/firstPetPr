#include <iostream>
#include <vector>
#include "math_operations.h"
#include "algoritms/two_sum.h"
#include "coreSyntax/pointer_exampl.h"
#include "coreSyntax/PointerFunctionClassExample.h"
#include "coreSyntax/PrintClass.h"
int main() {

    PointerFunctionClassExample pf;

    int (PointerFunctionClassExample::*func)(int, int) = &PointerFunctionClassExample::sub;

    PrintClass print;
    print.printResult(100, 70, func, pf);

    return 0;
}
