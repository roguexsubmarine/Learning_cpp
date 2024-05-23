#include <iostream>

class Simple{
    private:
        int x{};
    public:

        //constructor
        Simple(int n):
            x{n}
        {
            std::cout << "Created Simple " << x << std::endl;
        }
        
        //destructor
        ~Simple(){
            std::cout << "Destroying Simple " << x << std::endl;
        }
};

int main(){
    Simple s1{5};

    {
        Simple s2{10};
    }                       // <-- s2 dies here


    return 0;
}                           // <-- s1 dies here
