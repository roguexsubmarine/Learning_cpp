//data structure (contains collection of elements)
//insert, count, erase,
//find - return position (pointer to element)


#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    
    //insert
    s.insert(3);
    s.insert(5);
    s.insert(2);

    for(auto x: s){
        cout << x << ' ';
    }
    cout << '\n';
    
    //count
    cout << "Count of 2 is : " << s.count(2) << '\n';

    //inserts once (no dupicates)
    s.insert(10);
    s.insert(10);
    s.insert(10);
    
    cout << "Count of 10 is :" << s.count(10) << '\n';
    
    //remove
    s.erase(2);

    for(auto x: s){
        cout << x << ' ';
    }
    cout << '\n';
    
    //find
    auto pos = s.find(5);
    pos--;
    cout << "pos - 1 : " << *pos << endl;

    return 0;
}
