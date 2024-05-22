#include <iostream>

int main(){
    
    int x;
    std::cout << "Enter Decimal : ";
    std::cin >> x;

    std::cout << "Octal : " << std::oct << x << std::endl;
    std::cout << "Hex   : " << std::hex << x << std::endl;
    std::cout << "Dec   : " << std::dec << x << std::endl;

    return 0;
}
