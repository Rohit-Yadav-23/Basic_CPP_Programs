// This program demonstrates the use of the auto data type in C++.

#include <iostream>
using namespace std;

int main()
{
    auto x = 10;
    auto y = 3.14;
    auto c = 'a';
    auto b = true;
    auto s = "Hello, World!";
    auto p = &x;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "c = " << c << endl;
    cout << "b = " << b << endl;
    cout << "s = " << s << endl;
    cout << "p = " << p << endl;
    cout << "p = " << *p << endl;

    return 0;
}