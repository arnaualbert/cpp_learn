#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    int x = 0;

    std::cout << x << first::x << second::x;

    std::cout << x;

    return 0;

}