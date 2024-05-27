#include <iostream>
#include <array>
using namespace std;


int main(){
    
    //C-style array 3x3
    int a[3][3]{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i{}; i < 3; i++){
        for(int j{}; j < 3; j++){
            cout << a[i][j] << ' '; 
        }
        cout << '\n';
    }

    cout << '\n';

        //array array
        array <array<int, 3>, 3> arr {{
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    }};

    for(auto i: arr){
        for(auto j: i){
            cout << j << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
