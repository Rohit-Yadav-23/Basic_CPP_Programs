// Scope of Variable in C++

// Scope tells us where a VARIABLE is VISIBLE in the program.

#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    cout << x;

    return 0;
}


/*
-   "x" can only be used inside main()
-   Outside main(), x does not exist

    So, the scope of x is inside main().
*/