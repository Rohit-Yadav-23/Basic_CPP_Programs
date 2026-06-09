// Write a program to find the absolute value of a number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the integer value of n : ";
    cin >> n;

    if (n < 0)
    {
        // n *= (-1);              // or n = -n;
        cout << "Absolute Value of n is " << n;
    }

    else
        cout << "Absolute Value of n is " << n;

    return 0;
}