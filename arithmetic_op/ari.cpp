#include <iostream>

int main(){
    
    // order of operations
    // parenthesis
    // multiplication and division
    // addition and subtraction

    int studetns = 20;

    studetns = studetns + 1;
    studetns += 1;
    studetns++;
    std::cout << studetns << std::endl;


    studetns = studetns - 1;
    studetns -= 1;
    studetns--;
    std::cout << studetns << std::endl;


    studetns = studetns * 2;
    studetns *= 2;
    std::cout << studetns << std::endl;

    studetns = studetns / 2;
    studetns /= 2;
    std::cout << studetns << std::endl;

    int reminder = studetns % 3;
    std::cout << reminder << std::endl;

    int stu = 6 - 5 + 4 * 3 / 2;
    std::cout << stu << std::endl;
 
    stu = 6 - 5 + 4 * (3 / 2);
    std::cout << stu << std::endl;


    return 0;
}