#include <iostream>

int main(){
    

    double a = (int) 3.14;

    std::cout << a;

    char x = 100; // ascii value of 100
    std::cout << x << std::endl;

    int correct = 8;
    int questions = 10;
    double percent = (correct / (double)questions) * 100;

    std::cout << percent;

    return 0;
}