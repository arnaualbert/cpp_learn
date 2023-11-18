#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){
    text_t name = "Arnau";
    number_t age = 10;
    std::cout << name << std::endl;
    std::cout << age << std::endl; // std::endl is like \n 

    return 0;
}