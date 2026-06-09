/*
Pass by Reference in C++

    Pass by reference means: the function receives the actual variable itself, not a copy.
    So, changes made inside the function directly affect the original variable.
*/

#include <iostream>
using namespace std;

void changeValue(int &x)         //   "x" gets the address of the variable passed from main, so it can modify the original variable
{
    x = 100;

    cout << "Inside Function: " << x << endl;
}

int main()
{
    int a = 10;

    changeValue(a);       //  "a" is passed by reference, so it can be modified inside the function

    cout << "Inside Main: " << a;

    return 0;
}

/*
// Advantages of Pass by Reference
*   No extra memory for copies
*   Faster for large data
*   Can modify original variables

// Disadvantages
*   Original data can change accidentally
*/