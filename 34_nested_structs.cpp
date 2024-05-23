#include <iostream>

struct Employee{
    int id{};
    int age{};
};

struct Company{
    int no_of_employees{};
    Employee ceo{};     //use of nested structs;
};



int main(){

    Company bigtech;

    bigtech.no_of_employees = 5;
    bigtech.ceo.id = 1;
    bigtech.ceo.age = 35;

    std::cout << "bigtech.ceo.id : " << bigtech.ceo.id << std::endl;
    std::cout << "bigtech.ceo.age: " << bigtech.ceo.id << std::endl; 
    std::cout << "bigtech.no_of_employee : " << bigtech.no_of_employees<< std::endl;

    return 0;
}
