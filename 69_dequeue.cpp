//dequeue is a dynamic array
//whose both sides can be changed
//
//O(1) complexity
//
//push_back()
//pop_back()
//push_front()
//pop_front()

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    deque<int> q;

    q.push_back(10);
    q.push_back(20);
    q.push_front(30);
    q.push_front(40);

    for(auto x : q){
        cout << x << ' ';
    }
    cout <<'\n';

    cout << "element at index 0 : " << q.at(0) << '\n';
    cout << "size of deque : " << q.size() << '\n';

    q.pop_back();
    q.pop_front();

    for(auto x : q){
        cout << x << ' ';
    }
    cout << '\n';
    

    return 0;
}
