#include <iostream>
#include "math_operations.h"

int main() {

    int x = 10;
    int y = 5;

    std::cout << "x + y = " << add(x, y) << std::endl;
    std::cout << " x - y = " << substract(x, y) << std::endl;
    return 0;
}
