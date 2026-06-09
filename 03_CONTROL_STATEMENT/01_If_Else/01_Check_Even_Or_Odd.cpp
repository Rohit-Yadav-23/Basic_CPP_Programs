// Check whether the given number is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the value of x : ";
    cin >> x;

    if (x % 2 == 0)
        cout << "Number is EVEN";

    else
        cout << "Number is ODD";

    return 0;
}