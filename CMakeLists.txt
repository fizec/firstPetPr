cmake_minimum_required(VERSION 3.26)
project(firstPetPr)

set(CMAKE_CXX_STANDARD 20)

add_executable(firstPetPr main.cpp
        math_operations.h
        math_operations.cpp
        algoritms/twoSum/two_sum.h
        algoritms/twoSum/two_sum.cpp
        coreSyntax/pointer/pointer_exampl.h
        coreSyntax/pointer/pointer_exampl.cpp
        coreSyntax/pointer/PointerFunctionClassExample.cpp
        coreSyntax/pointer/PointerFunctionClassExample.h
        coreSyntax/pointer/PrintClass.cpp
        coreSyntax/pointer/PrintClass.h
        algoritms/polindrome/PolindromeValidator.cpp
        algoritms/polindrome/PolindromeValidator.h
)
