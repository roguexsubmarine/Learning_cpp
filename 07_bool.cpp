#include <iostream>

int main(){
    
    bool b{}; 
    //default value : FALSE
    std::cout << "default bool : " << b << std::endl;
    
    bool b1{true};
    bool b2{false};

    std::cout << "\nInitialized vars" << std::endl;
    std::cout << "b1 : " << b1 << "\nb2 : " << b2 << std::endl;

    std::cout << "\n\n//    1 -> TRUE\n//    0 -> FALSE" << std::endl;

    return 0;
}
