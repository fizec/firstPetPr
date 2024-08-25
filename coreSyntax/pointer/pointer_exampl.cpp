//
// Created by Ramil on 14.08.2024.
//
#include <iostream>
#include "pointer_exampl.h"

static std::string myMessage = "Idi na hui";


void readArray(int nums[]){
    int* numsPointer = nums;
    int length =  sizeof(nums);
    for(int i = 0; i < length; i++){
        std::cout << "NUMBER : " << *(numsPointer + i) << std::endl;
        *(numsPointer + i) += 10000;
    }
    for(int i = 0; i < length; i++){
        std::cout << "CHANGE_NUMBER : " << *(numsPointer + i) << std::endl;
    }
}

void printStringMessage(std::string *message){
    std::cout << "MESSAGE: " << *message << std::endl;
}

std::string* returnMessage(){
    return &myMessage;
}


