#include <iostream>

int main(){
    
    std::string name;

    while(name.empty()){
        std::cout << "enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << std::endl;

    // if(name.empty()){
        // std::cout << "you didn't enter anything\n";
    // }
    // else{
        // std::cout << "Hello " << name << std::endl;
    // }

    return 0;
}