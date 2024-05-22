// right-most args are made to be default

#include <iostream>

void add(int x, int y = 10, int z = 20){
    std::cout << x+y+z << std::endl;
}

int main(){
    
    add(1, 2 ,3);   // x,y,z -> 1,2,3
    add(50, 50);    // x,y,z -> 50,50,20
    add(1);        // x,y,z -> 1,10,20

    return 0;
}
