#include <iostream>

int main(){
    int L;
    int U;
    std::cout << "Please enter L: ";
    std::cin >> L;
    std::cout << "Please enter U: ";
    std::cin >> U;
    print_interval(L, U);
    return 0;
}