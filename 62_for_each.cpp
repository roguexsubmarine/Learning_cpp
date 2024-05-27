#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void double_num(int& i){
    i *= 2;
}

int main(){
    array arr{1, 2, 3, 4, 5};

    //printing array
    for(int i: arr){
        cout << i << ' ';
    }
    cout << '\n';
    
    //using for each (just like in python)
    for_each(arr.begin(), arr.end(), double_num);
    
    //printing array
    for(int i: arr){
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}
