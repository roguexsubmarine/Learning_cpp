//data structure stack
//O(1) operations
//
//push, pop, top
//empty, size

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> s;

    if(s.empty()){
        cout << "stack is empty " << endl;
    }

    s.push(2);
    s.push(5);
    s.push(3);
    
    cout << "size: " << s.size() << '\n';
    cout << "top : " << s.top() << '\n';

    s.pop();

    cout << "top : " << s.top() << '\n';

    return 0;
}
