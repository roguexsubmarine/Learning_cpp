#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

bool bigger(int a, int b){
    return (a > b);
}

int main(){
    
    array<int, 6> arr{13, 50, 40, 29, 59, 58};
    
    sort(arr.begin(), arr.end(), bigger);

    for(int i: arr){
        cout << i << ' ';
    }

    return 0;
}
