cmake_minimum_required(VERSION 3.26)
project(firstPetPr)

set(CMAKE_CXX_STANDARD 20)

add_executable(firstPetPr main.cpp
        math_operations.h
        math_operations.cpp
        algoritms/two_sum.h
        algoritms/two_sum.cpp
        coreSyntax/pointer_exampl.h
        coreSyntax/pointer_exampl.cpp
        coreSyntax/PointerFunctionClassExample.cpp
        coreSyntax/PointerFunctionClassExample.h
        coreSyntax/PrintClass.cpp
        coreSyntax/PrintClass.h
)
