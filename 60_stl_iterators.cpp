#include <array>
#include <vector>
#include <iostream>
#include <algorithm> //for find, fin_if, count, count_if, custom_sort
using namespace std;

//v.begin() and v.end() will return pointers to first and last object
//of the vector or array

int main(){
    
    array arr{1.1, 2.2, 3.3, 4.4, 5.5};
    auto start {arr.begin()};
    auto stop {arr.end()};

    for(auto p{start}; p != stop; p++){
        cout << *p << ' ';
    }
    cout << '\n';

    double search{2.2};
    double replace{6.6};

    auto found{find(arr.begin(), arr.end(), search)};
    if(found != arr.end()){
        cout << search << " found !" << endl;
        *found  = replace;
    }

    auto found2{find(arr.begin(), arr.end(), 7.7)};
    if(found2 != arr.end()){
        cout << 7.7 << " found !" << endl;
    }
    else{
        cout << 7.7 << " not found !" << endl;

    }
    
    for(auto p{start}; p != stop; p++){
        cout << *p << ' ';
    }
    cout << '\n';



    //vector operations

    vector v{'a', 'e', 'i', 'o', 'u'};

    auto e{v.begin()  + 3};
    cout << *e << endl;
    e = v.erase(e);       //erases the objects pointed to and starts pointing to next object
    for(auto dbl: v){
        cout << dbl << ' ';
    }
    cout << endl << *e << endl;


    return 0;
}
