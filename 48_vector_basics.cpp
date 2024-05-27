#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector prime{2, 3, 5, 7, 11};

    cout << "length of prime : " << prime.size() << endl;
    
    // no runtime bound check
    cout << "first prime : " << prime[0] << endl;
    
    //runtime bound check using at() function
    cout << "prime at index 2 : " << prime.at(2) << endl;

    return 0;
}
