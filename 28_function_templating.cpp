#include <iostream>

//template to add vars of same type
template <typename T>
T add(T x, T y){
    return x+y;
}


int main(){
    std::cout << add<int>(1, 2) << '\n';    //calls template for int
    std::cout << add<double>(3.2345, 6.2345) << '\n';

    return 0;
}
