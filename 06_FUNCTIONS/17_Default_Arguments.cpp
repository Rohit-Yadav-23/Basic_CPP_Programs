/*
    Default Arguments in C++

    Default arguments are values ASSIGNED to function parameters during FUNCTION DECLARATION.
    If the user does NOT provide values while calling the function, the default values are used AUTOMATICALLY.

    Syntax --> return_type function_name(parameter = value)
*/

#include <iostream>
using namespace std;

void greet(string name = "Mr. Alpha")     //  "Mr. Alpha" is the DEFAULT ARGUMENT
{
    cout << "Hello " << name << endl;        // ^ Since, NO value is passed. "Mr. Alpha" which is the DEFAULT ARGUMENT is used.
}



int add(int a, int b = 10)       // The DEFAULT VALUE of 'a' is 5
{
    return a + b;
}


void display(int a = 1, int b = 2)
{
    cout << a << " " << b;
}


int main()
{
    greet();     //  NO VALUE is passed.

    cout << add(5) << endl;          // Only ONE VALUE is passed.

    display();      // NO VALUE is passed.

    return 0;
}
