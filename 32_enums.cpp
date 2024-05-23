#include <iostream>

enum Color{
    black,      //assigned 0
    red,        // 1
    blue,       // 2
    green,      // 3
    white,      // 4
    yellow      // 5
};

enum Animal{
    cat = -3,       // -3
    dog,            // -2
    pig,            // -1
    horse = 5,      // 5
    giraffe = 5,    // 5
    donkey,         // 6
    elephant        // 7
};

int main(){
    
    Color apple{red};
    std::cout << "apple{red} will provide enum index : " << apple << std::endl;
    
    std::cout << '\n';
    
    Animal pet1{dog};
    Animal pet2{horse};
    Animal pet3{giraffe};
    Animal pet4{elephant};

    std::cout << "Animal index - dog : " << pet1 << std::endl;
    std::cout << "Animal index - horse : " << pet2 << std::endl;
    std::cout << "Animal index - giraffe : " << pet3 << std::endl;
    std::cout << "Animal index - elephant : " << pet4 << std::endl;
    
    std::cout << '\n';
    
    //scoped enums
    int blue = 10;
    std::cout << "main scoped - blue : " << blue << std::endl;
    std::cout << "enum scoped - blue : " << Color::blue << std::endl;

    return 0;
}
