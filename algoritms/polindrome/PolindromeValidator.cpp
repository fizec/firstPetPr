//
// Created by Ramil on 25.08.2024.
//

#include <string>
#include <vector>
#include <iostream>
#include "PolindromeValidator.h"

bool PolindromeValidator::isPolindrome(int num) {
    std::string numString = std::to_string(num);
    std::vector<char> numArray(numString.begin(), numString.end());
    std::reverse(numArray.begin(), numArray.end());
    std::string reverseString(numArray.data());

    std::cout << "ORIGINAL NUM: " << numString << " REVERSE NUM : " << reverseString << std::endl;
    return numString == reverseString;
}
