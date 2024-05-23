#include <iostream>

int main(){
    
    int x{5};
    int& ref1 {x};      //bound to var
    int& ref2 {ref1};   //bound to var

    //cannot refer to reference in C++
    //cannot reference to non-modifiable l-values

    std::cout << x << std::endl;
    std::cout << ref1 << std::endl;
    std::cout << ref2 << std::endl;

    std::cout << "Address of x      : " << &x <<std::endl;
    std::cout << "Address of ref1   : " << &ref1 << std::endl;
    std::cout << "Address of ref2   : " << &ref2 << std::endl;

    std::cout << "All point to one memory !" << std::endl;

    return 0;
}
