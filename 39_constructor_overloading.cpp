//constructor overloading

#include <iostream>

class Foo{
    private:
        int m_x{};
        int m_y{};
    
    public:
        //constructor with no arguments
        Foo(){
            std::cout << "No parameters, object with default values constructed" << std::endl;
        }
        
        //constructor taking arguments
        Foo(int x, int y):
            m_x{x}, m_y{y}
        {
            std::cout << "Parameters passed, Object Foo (" << x << ' ' << y << ") created" << std::endl;
        }
};


int main(){
    
    Foo f1{};
    Foo f2{3, 8};

    return 0;
}

