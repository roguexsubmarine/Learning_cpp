#include <iostream>
#include <vector>

enum Names{
    kenny,
    kyle,
    stan,
    cartman
};

using namespace std;

int main(){
    
    vector test_scores{30, 40, 20, 32};

    cout << "Test score of stan : " << test_scores[stan] << endl;
    
    return 0;
}
