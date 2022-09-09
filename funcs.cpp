/*
Author: Shenghao Dong
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>

void print_interval(int L, int U){
    int lower = L;
    int upper = U;
    for(int i = lower; i < upper; i++){
        std::cout << i << " ";
    }

}