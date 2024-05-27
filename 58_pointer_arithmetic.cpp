//ptr           - ptr pointing to an object
//ptr + 1       - ptr pointing to next object (not incrementing the address)
//ptr - 1       - ptr pointing to previous object

#include <iostream>
using namespace std;

int main(){
    
    int whole[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i: whole){
        cout << i << ' ';
    }
    
    cout << "\naddress of array whole : " << &whole << endl << endl;

    int* ptr{whole};
    cout << "address\t\t" << "int\n";
    
    //pointing to first object of array
    cout << ptr << '\t' << *ptr << endl;
    
    //next object
    ptr += 1;
    cout << ptr << '\t' << *ptr << endl;

    //going to 6 object from this object
    ptr += 6;
    cout << ptr << '\t' << *ptr << endl;
    
    //going one object behind;
    ptr--;
    cout << ptr << '\t' << *ptr << endl;



    return 0;
}
