#include <iostream>
using namespace std;

//passing by address (just declaration)
void pass_addr(int*, int);

int main(){
    
    //C-style int array
    int prime[] {2, 3, 5, 7, 11, 13, 17};
    cout << "length of array prime : " << size(prime) << endl;
    cout << "length of array prime : " << sizeof(prime) / sizeof(prime[0]) << endl;

    for(int num: prime){
        cout << num << ' ';
    }

    cout << '\n';
    
    //C-style strings (char arrays)

    char str[255]{};
    cout << "Enter string : ";
    cin.getline(str, 255);

    cout << "Entered string is : " << str << endl;
    cout << "length of string is : " << size(str) << "\n\n";

    char line[255]{};
    cout << "Enter another string : ";
    cin >> line;

    cout << "Entered string is : "<< line << endl << endl;
    
    //passing by address (address, length)
    int* ptr{prime};
    pass_addr(ptr, size(prime));

    return 0;
}

void pass_addr(int* arr, int len){

    for(int i{0}; i < len; ++i){
        cout << arr[i] << ' ';
    }
    cout << "\nPassed by address\n";
    return;
}
