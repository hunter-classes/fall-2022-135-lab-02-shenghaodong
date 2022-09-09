/*
Author: Shenghao Dong
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab2

Gets the user input for L and U then calls funcs.cpp.
*/

#include <iostream>
#include "funcs.h"

int main(){
    int L = -5;
    int U = 10;
    print_interval(L, U);
    std::cout << "\n";
    return 0;
}