#include <iostream>
#include <string>

int main(){
    std::string name {};    //empty string
    std::cout << "Enter name : ";
    std::cin >> name;

    std::cout << "Hello " << name << std::endl;

    return 0;
}
