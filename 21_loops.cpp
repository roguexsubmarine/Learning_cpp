#include <iostream>

int main(){
    
    std::cout << "For Loop" << std::endl;
    for(int i{0}; i < 5; i++){
        std::cout << i << std::endl;
    }

    std::cout << "While loop" << std::endl;
    int b{100};
    while(b > 90){
        std::cout << b << std::endl;
        b--;
    }

    std::cout << "Do while loop" << std::endl;
    int c = 'z';
    do{
        std::cout << c <<std::endl;
        c--;
    }while(c > 't');


    return 0;
}
