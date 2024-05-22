// goto , break, continue, halts

#include <iostream>

int main(){
    int x{0};
    std::cout << x << std::endl;
    goto skip;
    x++;
skip:
    std::cout << "After goto" << std::endl;
    x += 3;
    std::cout << x << std::endl;

    while(x){
        if(x == 1){break;}
        std::cout << x << std::endl;
        x--;
    }
    std::cout << "After break" << std::endl;

    while(x <= 11){
        if(x % 2 == 0){x++; continue;}
        std::cout << x << std::endl;
        x++;

    }
    std::cout << "After Continue" << std::endl;


    std::cout << "exit(0) clears stack\nstd::abort() does not clear stack" << std::endl;

    exit(0);
}
