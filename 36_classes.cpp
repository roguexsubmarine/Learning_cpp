#include <iostream>

class Date{
public:
    int d_day{};
    int d_month{};
    int d_year{};
};

void print_date(const Date& data){
    std::cout << data.d_day << std::endl;
    std::cout << data.d_month << std::endl;
    std::cout << data.d_year << std::endl;
    return;
}


int main(){
    
    Date date{4, 10, 24};
    print_date(date);

    return 0;
}
