#include <iostream>

class Fraction{
    public:
        int num{};
        int den{1};

    public:
        void setter(int x, int y){
            num = x;
            den = y;
        }
        
        double getter(){
            double q = num;
            q = q / den;
            return q;
        }
};

int main(){
    
    Fraction f1{11, 5};
    std::cout << "f1 ratio : " << f1.getter() << std::endl;

    Fraction f2{f1};
    std::cout << "f2 ratio : " << f2.getter() << std::endl; 

    return 0;
}
