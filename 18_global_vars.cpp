#include <iostream>

int a{5};

int main(){
    
    int a{10};

    std::cout << "Inside Main  :" << a << std::endl;
    std::cout << "Outside Main : " << ::a << std::endl;


    return 0;
}
