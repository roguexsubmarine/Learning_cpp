#include <iostream>

int main(){
    
    //static_cast<int>(5.5);

    int s = {
        static_cast<int>(5.5)
    };

    std::cout << s << std::endl;
    return 0;
}
