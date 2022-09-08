#include <iostream>

void print_interval(int L, int U){
    int lower = L;
    int upper = U;
    for(int i = lower; i < upper; i++){
        std::cout << i << " ";
    }

}