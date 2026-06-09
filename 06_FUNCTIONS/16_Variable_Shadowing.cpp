// Variable Shadowing in C++

//  Variable Shadowing --> When a local variable has the same name as a global variable, the local variable "shadows" the global variable. The local variable is used instead of the global variable.

#include <iostream>
using namespace std;

int x = 50;

int main()
{
    int x = 10;

    cout << x << endl;

    cout << ::x;         // To access the global variable "x", you can use the scope resolution operator "::" 
    return 0;
}