#include <iostream>
#include <cstdlib>

void generate(){
    int num = rand() % 10;
    std::cout << ++num << std::endl;
    return;
}

void choice(){
    int x{0};
    std::cout << "Generating random integer from 1 - 10" << std::endl;
    std::cout << "enter 1 to play, 0 to exit : ";
    std::cin >> x;

    if(x){
        generate();
        choice();
    }
    else{
        return;
    }
}


int main(){
    choice();    
    return 0;
}
