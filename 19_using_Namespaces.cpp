#include <iostream>


namespace Foo{
    void do_something(){
        std::cout << "Inside Foo" << std::endl;
    }
}

namespace Goo{
    void do_something(){
        std::cout << "Inside Goo" << std::endl;
    }
}


//nested namespace
namespace Outer{
    void do_something(){
        std::cout << "Inside Outer shell" << std::endl;
    }

    namespace Inner{
        void do_something(){
            std::cout << "Inside Inner shell" << std::endl;
        }
    }
}


//individual function
void do_something(){
    std::cout<< "Normal function" <<std::endl;
}


int main(){
    
    do_something();
    Foo::do_something();
    Goo::do_something();
    Outer::do_something();
    Outer::Inner::do_something();

    //aliasing namespace
    std::cout << "\nAfter Aliasing innermost to active" << std::endl;
    namespace Active= Outer::Inner;
    Active::do_something();

    return 0;

}
