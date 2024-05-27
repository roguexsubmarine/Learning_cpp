//push_back()           Push
//pop_back()            Pop
//back()                Peek
//emplace_back()        Push (if object to be push doesnt already exists)
//empty()               isEmplty functiom
//.reserve(6)           changes capactiy of stack to 6 (not length)

#include <iostream>
#include <vector>

using namespace std;

void print_vec(const vector<int>& arr){
    for(int num: arr){
        cout << num << ' ';
    }
    cout << '\n';
}


int main(){
    
    vector v{1, 2, 3, 4, 5};
    print_vec(v);

    v.push_back(6);
    print_vec(v);
    cout << "Peeking : " << v.back() << endl; 

    v.pop_back();
    print_vec(v);
    cout << "Peeking : " << v.back() << endl; 
    
    v.emplace_back(7);
    print_vec(v);
    cout << "Peeking : " << v.back() << endl; 
    
    v.reserve(10);
    print_vec(v);
    cout << "Size of v : " << v.size() << endl; 

    return 0;
}
