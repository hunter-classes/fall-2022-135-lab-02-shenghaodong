/*
Author: your name
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: LAB2A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <cmath>

int main(){
    int num;
    std::cout << "Please enter an integer: ";
    std::cin >> num;
    while(num < 0 || num >= 100){
        std::cout << "Please re-enter: ";
        std::cin >> num;
    }
    std::cout << "Number squared is " << num*2 << std::endl;
    return 0;
}