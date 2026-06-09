// Dereference Operator (*)

// Dereference Operator in C++ is used to access the value stored at the memory address pointed to by a pointer. It is denoted by the asterisk symbol (*). When you have a pointer variable, you can use the dereference operator to retrieve or modify the value at the address that the pointer is pointing to.    

#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int* p = &x;   // 'p' is a pointer that holds the address of variable 'x'

    cout << "Value of x : " << x << endl;      // Output: 5
    cout << "Address of x : " << &x << endl;   // Output: Address of variable 'x'
    cout << "Value at address stored in p : " << *p << endl;  // Output: 5

    *p = 10;    // Modifying the value at the address pointed to by 'p'

    cout << "Updated value of x : " << x << endl;  // Output: 10

    return 0;
}