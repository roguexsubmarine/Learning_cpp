//CONSTRUCTOR
//a special member function that is automatically called after an object is creater
//
//there are rule:
//  -> same name as the class
//  -> no return type (not even void)

#include <iostream>

class Foo{
    private:
        int m_x{};
        int m_y{};
    
    public:
        //constructor (with setter)
        Foo(int x, int y):
            m_x{x}, m_y{y}
        {
            std::cout << "Foo (" << x << ", " << y << ") constructed." << std::endl;
        }
};
    


int main(){
    
    //just creating object (class instance)
    Foo(2, 4);
    Foo{5, 6};

    return 0;
}
