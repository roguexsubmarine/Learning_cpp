#include <iostream>

int main(){

    int x;
    std::cout << "Enter a float :";
    std::cin >> x;
    std::cout << "After conversion :" << x;


    int y;
    std::cout << "\nEnter an int :";
    std::cin >> y;

    float z = y;
    std::cout << "\nAfter conversion :" << y << std::endl;
    return 0;
}
