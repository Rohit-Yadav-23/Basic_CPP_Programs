// sizeof Operator

// sizeof operator in C++ is a compile-time operator that returns the size of a variable or data type in bytes.

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of int is : " << sizeof(int) << " bytes" << endl;
    cout << "Size of char is : " << sizeof(char) << " bytes" << endl;
    cout << "Size of float is : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double is : " << sizeof(double) << " bytes" << endl;
    cout << "Size of long is : " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long is : " << sizeof(long long) << " bytes" << endl;

    return 0;
}