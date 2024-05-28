//priority queue data structure
//the one with most/least weigth goes in the front 
//
//O(1) complexity of ops
//push, pop, top
//empty, size

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    priority_queue<int> pq;

    if(pq.empty()){
        cout << "priority queue is empty.\n";
    }

    pq.push(3);
    pq.push(4);
    pq.push(6);

    cout << "priority queue top : " << pq.top() << '\n';
    cout << "size of priority queue :" << pq.size() << '\n';

    pq.push(10);
    cout << "priority queue top : " << pq.top() << '\n';

    pq.pop();
    cout << "priority queue top : " << pq.top() << '\n';

    pq.push(2);
    cout << "priority queue top : " << pq.top() << '\n';

    return 0;
}
