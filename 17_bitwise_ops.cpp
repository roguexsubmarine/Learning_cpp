#include <iostream>

int main(){
    
    int x {0b0000'0101};
    int y {3};

    std::cout << x << std::endl;

    //left shift
    x << y;

    y = 1;

    //right shift
    x >> y;

    int a = 0b1010'1010;
    int b = 0b1111'0000;


    std::cout << "a - 1010'1010 -> " << a << "\nb - 1111'0000 -> " << b << std::endl;


    //bitwise not
    std::cout << "NOT   :"<< ~a << std::endl;

    //bitwise logic
    std::cout << "AND   :" << (a & b) << std::endl;
    std::cout << "OR    :" << (a | b) << std::endl;
    std::cout << "XOR   :" << (a ^ b) << std::endl;



    return 0;
}
