#include <iostream>

#define MAX_LEN 20

int main(){
    
    std::string word{};
    std::cout << "Enter word : ";
    std::cin >> word;

    
    std::string line{};
    std::cout << "Enter a line : ";
    std::getline(std::cin >> std::ws, line);

    std::cout << word << std::endl; 
    std::cout << line << std::endl;

    return 0;
}
