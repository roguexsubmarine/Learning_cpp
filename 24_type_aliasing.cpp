#include <iostream>

int main(){
    
    using Distance = double;    //type aliasing
    Distance mileDestination {3.4};
    std::cout << mileDestination << std::endl;

    typedef double Miles;   //typedef - older way of type aliasing
    Miles road{9.7};
    std::cout << road << std::endl;

    return 0;
}
