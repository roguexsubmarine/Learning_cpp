// to avoid expensive copies we can - Pass By Reference
// we can all change the value to object itself

#include <iostream>

void add_one(int& y){
    ++y;
    return;
}



int main(){
    
    int x{5};  
    std::cout << "Before    (x)     : " << x << std::endl;
    
    add_one(x);
    std::cout << "After     (x)     : " << x << std::endl;

    return 0;
}

//we passed an integer
//but in function it creates a reference 
//(give it a different name but changes its value since addresses are same)
