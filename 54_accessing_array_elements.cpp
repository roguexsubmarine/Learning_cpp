#include <iostream>
#include <array>

using namespace std;

int main(){
    
    array arr{1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    cout << "size of arr : " << arr.size() << endl;
    cout << "getting third using [] : " << arr[2] << endl;
    cout << "getting third using at : " << arr.at(2) << endl;

    //throws error at runtime - cuz it bound-checks at runtime
    cout << "getting 10th using at  : " << arr.at(10) << endl;

    return 0;
}
