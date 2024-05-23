#include <iostream>

//normal struct
struct Employee{
    int id{};
    int age{};
    double wage{};
};

//default initialization
struct Fraction{
    int num{};
    int den{1};     //default denominator = 1 //can't initialize in C
};

int main(){
    
    //nornal instance
    Employee joe{}; 
    std::cout << "Before initialization joe.id : " << joe.id << std::endl;
    
    joe.id = 14;
    joe.age = 32;
    joe.wage = 40000.5;

    std::cout << "After initialization joe.id : " << joe.id << std::endl;

    //parametric initialization
    Employee frank{1, 23, 30000};
    Employee john{5, 25};
    Employee sam{
        .id{20},
        .wage{20300}
    }


    Fraction f1{};
    std::cout << "Default initialization - f1.num, f1.den : " << f1.num << ' ' << f1.den << std::endl;


    

    return 0;
}
