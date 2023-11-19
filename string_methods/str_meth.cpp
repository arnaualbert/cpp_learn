#include <iostream>

int main(){

    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin >> std::ws, name);

    name.append(" is the best");
    name.at(0) = 'B';
    name.insert(0, "My name is ");

    if(name.empty()){
        std::cout << "you didn't enter anything\n";
    }
    else{
        std::cout << "your name is: " << name << std::endl;
    }


    if(name.length() > 12){
        std::cout << "your name can't be over 12 characters long\n";
    }
    else{
        std::cout << "welcome " << name << std::endl;
    }

    return 0;
}