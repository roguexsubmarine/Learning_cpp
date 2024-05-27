#include <iostream>
#include <vector>

using namespace std;

//we need to explicitly define object type of the vector
void pass_ref(const vector<char>& arr){
    for(auto i: arr){
        cout << i << ' ';
    }
}

int main(){
    vector vowels{'a', 'e', 'i', 'o', 'u'};

    pass_ref(vowels);
    cout << '\n';
    return 0;
}


//we can use templating to tackle above issue
//
//template <typename T>
//void pass_ref(const vector<T>& arr){
//  for(auto i: arr){
//      cout << i << ' ';
//  }
//}

//this will accept every data type inside vector arr
