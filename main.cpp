#include <iostream>
#include <vector>
#include "math_operations.h"
#include "algoritms/two_sum.h"
#include "coreSyntax/pointer_exampl.h"

int main() {

    int x = 10;
    int y = 5;

//    std::cout << "x + y = " << add(x, y) << std::endl;
//    std::cout << " x - y = " << substract(x, y) << std::endl;
//
//
//    std::vector<int> nums = {2, 5, 6, 12, 8};
//    const std::vector<int> &result = twoSum(nums, 11);
//
//    std::cout << "result array : [" << result.at(0) << ", " << result.at(1) << "]" << std::endl;

    int nums[] = {1, 4,6,2,653,35,3,1, 99999};
    readArray(nums);

    std::string myMessage = "PIZDEC";
    printStringMessage(&myMessage);
    std::string* getMessage = returnMessage();
    std::cout << "MESSAGE COME BACK: "  << *getMessage << std::endl;
    std::cout << "MESSAGE FROM POINTER: " << *returnMessage() << std::endl;

    return 0;
}
