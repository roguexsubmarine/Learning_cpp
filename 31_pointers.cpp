// int      - normal int
// int&     - reference
// int*     - int pointer

#include <iostream>

int main(){

    int x{5};
    int& ref{x};
    int* ptr{&x};

    std::cout << "x and &x      : " << x << '\t' << &x << std::endl;
    std::cout << "ref and &ref  : " << ref << '\t' << &ref << std::endl;
    std::cout << "ptr and *ptr  : " << ptr << '\t' << *ptr << std::endl;
   
    //initializing to null ptr
    int* n;
    n = nullptr;

    std::cout << "\nvalue of null_pointer - n : " << n << std::endl; 
    
    //double pointer
    int num{10};
    int* p{&num};
    int** pp{&p};
    
    std::cout << "\n";
    std::cout << "int num                     : " << num << std::endl;
    std::cout << "single pointer - p  , *p    : " << p << ' ' << *p << std::endl;
    std::cout << "double pointer - pp , *pp   : " << pp << ' ' << *pp << ' ' << std::endl;


    return 0;
}

