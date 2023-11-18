#include <iostream>

int main(){

    std::string name;
    int age;
    std::cout << "Tell me your full name: ";
    // std::cin >> name;
    std::getline(std::cin >> std::ws, name); // no whitespace
    std::cout << "Tell me your age: ";
    std::cin >> age;
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    return 0;
}