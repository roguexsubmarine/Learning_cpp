#include <iostream>

//simple struct
struct Number{
    int value;
};

//passing by reference      (use . for reference)
void add_one_ref(Number& r){
    ++(r.value);
}

//passing by address        (use -> for pointers)
void add_one_ptr(Number* p){
    ++(p->value);
}


int main(){
    
    Number x{10};
    std::cout << "Before Value of Number x : " << x.value << std::endl;
    
    add_one_ref(x);
    std::cout << "After reference Value of Number x : " << x.value << std::endl;
    
    add_one_ptr(&x);
    std::cout << "After address   Value of Number x : " << x.value << std::endl;
    

    


    return 0;
}
