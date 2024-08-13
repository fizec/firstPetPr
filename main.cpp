#include <iostream>
#include <vector>
#include "math_operations.h"
#include "algoritms/two_sum.h"

int main() {

    int x = 10;
    int y = 5;

    std::cout << "x + y = " << add(x, y) << std::endl;
    std::cout << " x - y = " << substract(x, y) << std::endl;


    std::vector<int> nums = {2, 5, 6, 12, 8};
    const std::vector<int> &result = twoSum(nums, 11);

    std::cout << "result array : [" << result.at(0) << ", " << result.at(1) << "]" << std::endl;
    return 0;
}
