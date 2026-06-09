/*
NULL POINTERS IN C++

    A null pointer is a pointer that does not point to any valid memory location.

    It contains a special value: nullptr or NULL

    A null pointer means: “This pointer is currently not pointing anywhere.”


    Why Null Pointers are Used ?

    indicate pointer is empty,
    avoid garbage addresses
*/

#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    cout << ptr << endl;         // Prints '0' because nullptr is represented as 0 in C++

    // cout << *ptr;        // This will cause a runtime error (dereferencing a null pointer is INVALID as because it does not point to a valid memory location)


    int *ptr2;
    cout << ptr2;        // This will print a garbage address (uninitialized pointer) --> That's why it's important to initialize pointers to nullptr if they are not assigned a valid memory address.
    
    return 0;
}
