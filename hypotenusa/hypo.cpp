#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter the length of the first side: ";
    std::cin >> a;

    std::cout << "Enter the length of the second side: ";
    std::cin >> b;


    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "third side is: " << c << std::endl;

    return 0;
}