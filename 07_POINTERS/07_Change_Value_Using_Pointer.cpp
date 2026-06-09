//                         Changing the value of a variable using a pointer                                

#include<iostream>
using namespace std;

int main()
{
    int a = 5;

    int *p = &a;

    cout << "Value of a = " << a << endl;

    *p = 20;         // Changes the value at address of a through pointer p. As *p is same as a, it changes the value of a.

    cout << "Value of a after change = " << a << endl;

    return 0;
}