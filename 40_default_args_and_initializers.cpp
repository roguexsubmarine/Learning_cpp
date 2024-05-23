#include <iostream>
    
class Foo{
    private:
        int m_x{};      // default member (ignored)
        int m_y{5};     // default member initializer (will be used)
        int m_z;        // no initialization
    
    public:
        //default arguments
        Foo(int x = 10, int y = 20, int z = 30):
            m_x{x}, m_y{y}, m_z{z}
        {
            std::cout << "Object Foo (" << m_x << ' ' << m_y << ' ' << m_z << ") created." << std::endl;
        }
};
        


int main(){
    
    Foo f1{};
    Foo f2{0};
    Foo f3{1, 1};
    Foo f4{100, 100, 100};

    return 0;
}
