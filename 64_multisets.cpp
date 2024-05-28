#include <bits/stdc++.h>
using namespace std;

int main(){
    
    multiset<int> s;
    
    s.insert(2);

    s.insert(5);        //multiset can insert multiple times
    s.insert(5);
    s.insert(5);
    
    s.insert(3);

    cout << "count of 5 : " << s.count(5) << '\n';

    //printing set
    for(auto x : s){
        cout << x << ' ';
    }
    cout << '\n';
    
    //erases all instances of the element
    s.erase(5);
    cout << "count of 5 : " << s.count(5) << '\n';

    s.insert(7);
    s.insert(7);
    s.insert(7);
    cout << "count of 7 : " << s.count(7) << '\n';

    //to erase just one instance (we can element using pointer)
    s.erase(s.find(7));
    
    for(auto x : s){
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}
