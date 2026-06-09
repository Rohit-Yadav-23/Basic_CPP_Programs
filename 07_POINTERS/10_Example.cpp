// Example of Double Pointer (Pointer to Pointer) in C++

#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    int *ptr = &x;

    int **dptr = &ptr;

    cout << "Value of x: " << x << endl;             // Actual Value of x

    cout << "Address of x: " << ptr << endl;        // Address of x (which is stored in ptr)

    cout << "Address of pointer ptr: " << dptr << endl;      // Address of pointer ptr (which is stored in dptr)

    cout << "Value at address stored in ptr: " << *ptr << endl;       // Value at address stored in ptr (which is value of x)

    cout << "Value at address stored in pointer pointed by dptr: " << **dptr << endl;    // Value at address stored in pointer pointed by dptr (which is value of x, as dptr points to ptr which points to x)

    return 0;
}