#include <iostream>

int main(){
    
    //relational 
    // > < == != >= <=
    int a = (5 < 4);
    int b = (3 == 3.0);
    int c = (9.8 <=10);

    //logical operator
    // &&, ||, !    -> and, or, not
    int x = ( true && false);
    int y = ( true || false);
    int z = ( !false);

    //shorthand
    // ++ , --
    int p = 5;
    int q = p++;
    int r = --q;


    std::cout << "5 < 4         " << a << std::endl;
    std::cout << "3 == 3.0      " << b << std::endl;
    std::cout << "9.8 <= 10     " << c << std::endl;

    std::cout << "\n";

    std::cout << "true && false " << x << std::endl;
    std::cout << "true || false " << y << std::endl;
    std::cout << "!false        " << z << std::endl;

    std::cout << "\n";

    std::cout << "p = 5     " << std::endl;
    std::cout << "q = p++   " << std::endl;
    std::cout << "r = --q   " << std::endl;
    std::cout << "(p q r) = (" << p << " " << q << " " << r << ")" << std::endl;

    return 0;
}
