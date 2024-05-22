#include <iostream>

int add (int a, int b){
    return a + b;
}


int main(){

    std::cout << "Enter two numbers : ";
    
    int x{0}, y{0};
    std::cin >> x >> y;

    std::cout << "Sum : "<< add(x, y) << std::endl;
    return 0;

}
