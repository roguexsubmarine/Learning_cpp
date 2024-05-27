#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector v{0, 1, 2, 3, 4, 5};
    cout << "size of v : " << v.size() << endl;
    
    //resizing to 3 (shriking)
    v.resize(3);
    cout << "size of v : " << v.size() << endl;

    for(auto i: v){
        cout << i << ' ';
    }

    cout << '\n';
    
    //resizing to 10 (increasing capacity)
    v.resize(10);
    cout << "size of v : " << v.size() << endl;

    for(auto i: v){
        cout << i << ' ';
    }

    return 0;
}
