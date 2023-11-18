#include <iostream>
#include <cmath>

int main() 
{
   double x = 3.99;
   double y = 4;
   double z;

   z = std::max(x, y); //returns the maximum
   std::cout << z;
   z = std::min(x, y); //returns the minimum
   std::cout << z;
   z = pow(2, 4); // returns the power
   std::cout << z;
   z = sqrt(9); // returns the square root
   std::cout << z;
   z = abs(-3); // returns the absolute
   std::cout << z;
   z = round(x); // returns the rounded
   std::cout << z;
   z = ceil(x); // returns the ceiling
   std::cout << z;
   z = floor(x); // returns the floor
   std::cout << z;

   return 0;
}