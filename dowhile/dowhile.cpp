#include <iostream>

int main(){

    int num;

    do{   
        std::cout << "Enter a number positive number: ";
        std::cin >> num;
    }while (num < 0);
    
    std::cout << "You entered: " << num << std::endl;


    return 0;
}