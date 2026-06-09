// Function Overloading in C++ (Method - 1)

// Function overloading allows you to define MULTIPLE FUNCTIONS with the SAME NAME, but with DIFFERENT TYPES or NUMBERS OF PARAMETERS. The compiler DECIDES which FUNCTION to CALL based on the TYPES of ARGUMENTS you PASS when CALLING the FUNCTION.

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << a + b << endl;
}

void add(int a)
{
    cout << a << endl;
}

int add(int a, int b, int c)
{
    cout << a + b + c << endl;
    return a;
}

/* Here, the NAME of the FUNCTION is SAME ie "add", but it's NUMBER of PARAMETERS and RETURN TYPE both are DIFFERENT
   So, this is called FUNCTION OVERLOADING   */

int main()
{
    add(5, 8);
    add(50);
    add(50, 60, 10);
}