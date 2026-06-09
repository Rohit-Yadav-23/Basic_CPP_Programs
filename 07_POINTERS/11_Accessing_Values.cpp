//                                 Accessing Values using Pointers and Double Pointers

#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    int *p = &a;

    int **q = &p;

    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;

    //  All three lines above will print the same value (5).
    return 0;
}