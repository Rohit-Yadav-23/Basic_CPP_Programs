/*
Pass by Value in C++

*   Pass by value means: a copy of the actual argument is passed to the function.
//  So, changes made inside the function do not affect the original variables.
*/

#include <iostream>
using namespace std;

void changeValue(int x)      //  "x" gets a copy of the variable passed from main, so it cannot modify the original variable
{
    x = 100;

    cout << "Inside Function: " << x << endl;
}

int main()
{
    int a = 10;

    changeValue(a);

    cout << "Inside Main: " << a;       //   "a" is still 10 because it was passed by value

    return 0;
}


/*
//  Advantages of Pass by Value
*   Original data stays safe
*   No accidental modification
*   Easy to understand

// Disadvantage
*   Extra memory is used because copies are created
*   Can be slower for large data
*/