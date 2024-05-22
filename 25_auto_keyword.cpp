#include <iostream>

int main(){
    
    auto a{5.0};
    auto b{1 + 2};
    auto c{0};
    auto d{true};
    auto e{0b10011010};

    std::cout << "typeid of 5.0 : " <<typeid(a).name() << std::endl;
    std::cout << "typeid of 1+2 : " <<typeid(b).name() << std::endl;
    std::cout << "typeid of 0   : " <<typeid(c).name() << std::endl;
    std::cout << "typeid of true: " <<typeid(d).name() << std::endl;
    std::cout << "typeid of bin : " <<typeid(e).name() << std::endl;

    // auto keyword can be used for return type of function as well
    // example
    // auto add (int x, int y);

    return 0;
}

