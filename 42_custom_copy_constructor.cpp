#include <iostream>

class Number{
    private:
        int value{};
    public:
        Number(int x = 1):
            value{x}
        {
            std::cout << "Number object created : " << value << std::endl;
        }
        
        //defined copy constructor 
        Number(const Number& f):
            value{f.value}
        {
            std::cout << "Defined copy constructor called" << std::endl;
        }
        
};

int main(){
    
    Number n1{};
    Number n2{10};
    Number n3 {n2};

    return 0;
}


//different types of valid initialization
//
//Foo f6 = {f3};
//Foo f7 = f3;
//Foo f8(f3);
//Foo f9{f3}
