//                           SIZE of VARIOUS POINTER TYPES in C++

/*
    Pointer is a variable that stores the address of another variable.
    The size of a pointer depends on the architecture of the system.
    The size of a pointer is always 4 bytes in 32-bit systems and 8 bytes in 64-bit systems.
    The size of a pointer is always the same, regardless of the type of data it points to.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of int pointer is : " << sizeof(int *) << " bytes" << endl;
    cout << "Size of char pointer is : " << sizeof(char *) << " bytes" << endl;
    cout << "Size of float pointer is : " << sizeof(float *) << " bytes" << endl;
    cout << "Size of double pointer is : " << sizeof(double *) << " bytes" << endl;
    cout << "Size of long pointer is : " << sizeof(long *) << " bytes" << endl;
    cout << "Size of long long pointer is : " << sizeof(long long *) << " bytes" << endl;

    return 0;
}

/*
    OUTPUT
    
    Size of int pointer is : 8 bytes
    Size of char pointer is : 8 bytes
    Size of float pointer is : 8 bytes
    Size of double pointer is : 8 bytes
    Size of long pointer is : 8 bytes
    Size of long long pointer is : 8 bytes
*/