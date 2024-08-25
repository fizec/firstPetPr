//
// Created by Ramil on 13.08.2024.
//

#include <iostream>
#include "two_sum.h"

std::vector<int> twoSum(std::vector<int> nums, int target){
    std::vector<int> resultPosition;
    try{
        for (int i = 0; i < nums.size()-1; i++) {
            if(nums.at(i) + nums.at(i+1) == target) {
                resultPosition.push_back(i);
                resultPosition.push_back(i+1);
                break;
            }
        }
    }catch (const std::exception& exception){
        std::cout << "REASON: " << exception.what() << std::endl;
    }

    return resultPosition;
}
