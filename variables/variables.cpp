#include <iostream>

int main(){

    // integer
    int age = 10;

    // floating point
    double price = 9.99;
    double gpa = 3.5;
    double temp = 25.6;

    // single character
    char grade = 'A';
    char initial = 'J';
    char dollar = '$';

    // boolean (true or false)
    bool is_raining = true;
    bool is_sunny = false;

    std::string name = "Arnau";
    std::string day = "Monday";
    std::string food = "Pizza";

    std::cout << name << " is learning C++ \n";
    std::cout << "hello " << name << "\n";

    // const keyword

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm\n";

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;


    return 0;
}