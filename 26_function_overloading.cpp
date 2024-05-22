#include <iostream>


int add (int x, int y)
{   return x + y;    }

double add (double a, double b)
{   return a + b;   }

int main(){
    
    std::cout << add(5, 7) << std::endl;
    std::cout << add(9.2431, 6.234) << std::endl;
    return 0;
}
