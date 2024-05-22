#include <iostream>

int main(){
    
    int bin1 = 0b1;     // 0000 0000 0000 0001 -> 1     (dec)
    int bin2 = 0b1010;  // 0000 0000 0000 1010 -> 10    (dec)
    
    //using digit separator;
    int bin3 {0b1011'1001}; // 185  (dec)
    
    std::cout << "0b1 , 0b1010, 0b1011'1001" << std::endl;

    std::cout << "bin1 -> " << bin1 << std::endl;
    std::cout << "bin2 -> " << bin2 << std::endl;
    std::cout << "bin3 -> " << bin3 << std::endl;

    return 0;
}
