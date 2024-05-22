#include <iostream>

#define PRINT_JOE

int main(){

    #ifdef PRINT_JOE
    std::cout << "Joe\n";
    #endif

    #ifdef PRINT_BOB
    std::cout << "Bob\n";
    #endif


    return 0;
}

// This will help in debuggin
// we can log information which can be toggled on and off like a switch
//
// // #define DEBUG 1
//
// // #ifdef DEBUG
// // ...print_status_or_anything;
// // #endif
//
//
// // fact!
// // #if0       -> anything inside this block is not compiled
// // #endif


