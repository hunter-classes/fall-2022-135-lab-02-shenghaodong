/*
Author: Shenghao Dong
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab2B

Prints the interval from L to U but does not include U.
*/

#include <iostream>

void print_interval(int L, int U){
    int lower;
    int upper;
    std::cout << "Please enter L: ";
    std::cin >> lower;
    std::cout << "Please enter U: ";
    std::cin >> upper;
    for(int i = lower; i < upper; i++){
        std::cout << i << " ";
    }

}