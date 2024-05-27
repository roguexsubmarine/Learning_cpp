#include <iostream>
#include <array>
using namespace std;

//passing array by reference
void pass_ref(const array<int, 5>& arr){
    for(int num: arr){
        cout << num << ' ';
    }
    cout << '\n';
}

//returning array by value
const array<int, 5> return_arr (){
    array init_arr{10, 20, 30, 40, 50};
    return init_arr;
}


int main(){
    
    array a {return_arr()};

    pass_ref(a);
    
    return 0;
}
