//   Global Scope                                              

//   A variable declared outside all functions is called a global variable.
//   It can be accessed from any function.

#include <iostream>
using namespace std;

int x = 100;

void show()
{
    cout << x << endl;
}

int main()
{
    cout << x << endl;

    show();

    return 0;
}