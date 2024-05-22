//if
//switch
//conditional operator

#include <iostream>

int main(){
    
    //if conditional
    int a{10};
    int b{0};

    std::cout<< "(if_else) Compare with 10 : ";
    std::cin >> b;

    if ( b > a){
        std::cout << "Greater" << std::endl;
    }
    else{
        std::cout << "Smaller" << std::endl;
    }

    
    // switch case
    int c;
    std::cout << "(Switch case) Enter number 0 - 3 : ";
    std::cin >> c;

    switch (c){
        case 0: std::cout << '0' << std::endl; break;
        case 1: std::cout << '1' << std::endl; break;
        case 2: std::cout << '2' << std::endl; break;
        case 3: std::cout << '3' << std::endl; break;
        default: std::cout << "default" << std::endl;
    }


    //conditional operator
    std::cout << "\nConditional operator" << std::endl;
    int x = ( 5 > 2)? 1: 0;
    int y = (-1 > 0)? 1: 0;

    std::cout << x << std::endl << y << std::endl;

    return 0;
}
