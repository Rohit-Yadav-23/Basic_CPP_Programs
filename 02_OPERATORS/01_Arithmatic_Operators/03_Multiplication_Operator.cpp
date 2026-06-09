// Multiplication Operator

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x and y : ";
    cin >> x >> y;

    int z;
    z = x * y;
    cout << "Value of z is : " << z;

    x *= y;

    cout << endl << "The new value of x becomes : " << x;
    return 0;
}