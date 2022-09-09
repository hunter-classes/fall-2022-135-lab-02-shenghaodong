/*
Author: Shenghao Dong
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include "funcs.h"

int main(){
    int L;
    int U;
    std::cout << "Please enter L: ";
    std::cin >> L;
    std::cout << "Please enter U: ";
    std::cin >> U;
    print_interval(L, U);
    std::cout << "\n";
    return 0;
}