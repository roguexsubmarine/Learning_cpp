#include <iostream>
int main(){

    [[maybe_unused]] double pi {3.1415926};
    [[maybe_unused]] double g {9.8};
    
    std::cout << "Variables are unused" << std::endl;

    return 0;
}
