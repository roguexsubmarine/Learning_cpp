#include <iostream>
#include <bitset>   

int main(){
    std::bitset<8> bin{0b0000'0101};
    std::cout<< bin << std::endl;
    
    bin.set(3);     // 0b0000'1101   
    std::cout<< bin << std::endl;

    bin.flip(6);    // 0b0100'1101
    std::cout<< bin << std::endl;  

    bin.reset(0);   // 0b0100'1100
    std::cout<< bin << std::endl;
    

    return 0;
}
