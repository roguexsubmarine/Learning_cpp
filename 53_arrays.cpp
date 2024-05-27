//array - fixed size/length
//length cannot be changed
//length should be known at instantiation
//faster than vector 
//less expensive since no reallocation

#include <iostream>
#include <array>
using namespace std;

int main(){
    
    //syntax
    //array<int, const length> name;
    
    //different inialization
    array<int, 5> b{1, 2};      // 0 0 0 1 2

    for(auto i: b){
        cout << i << ' ';
    }
    
    cout << '\n';

    return 0;
}
