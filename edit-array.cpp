#include <iostream>

int main(){
    int arr[10];
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        arr[i] = 1;
    }
    
    for(int j = 0; j < sizeof(arr)/sizeof(int); j++){
        std::cout << arr[j] << " ";
    }
    std::cout << "\n" << std::endl;
    while(true){ 
        int index;
        int val;
        std::cout << "Input index: ";
        std::cin >> index;
        std::cout << "Input value: ";
        std::cin >> val;
        std::cout << "\n";
        if(index < sizeof(arr)/sizeof(int)){
            arr[index] = val;
        }else{
            std::cout << "Index out of range. Exit." << std::endl;
            break;
        }
        for(int x = 0; x < sizeof(arr)/sizeof(int); x++){
            std::cout << arr[x] << " ";
        }
        std::cout << "\n" << std::endl;
    }
    return 0;
}