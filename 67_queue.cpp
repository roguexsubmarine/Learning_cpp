//queue data structure
//(nothing but a dynamic array)
//
//O(1) operations
//push, pop, front
//empty, size

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    queue<int> q;

    if(q.empty()){
        cout << "queue is empty.\n";
    }

    q.push(4);
    q.push(7);
    q.push(9);
    
    cout << "size  : " << q.size() << '\n';
    cout << "front : " << q.front() << '\n';

    q.pop();

    cout << "front : " << q.front() << '\n';

    return 0;
}
