#include <iostream>

int main()
{

    int age;
    std::cout << "Tell me your age: ";
    std::cin >> age;

    if (age >= 100)
    {
        std::cout << "You are too old!" << std::endl;
    }
    else if (age >= 18)
    {
        std::cout << "Welcome to the site!" << std::endl;
    }
    else if (age < 0)
    {
        std::cout << "You haven't been born yet!" << std::endl;
    }
    else
    {
        std::cout << "Sorry, you are not allowed." << std::endl;
    }

    return 0;
}