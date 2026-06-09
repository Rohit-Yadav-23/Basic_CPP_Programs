// Check whether the given number is a three digit number or not.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if (n >= 100 && n <= 999)
        cout << n << " is a three digit no.!";

    else
        cout << n << " is not a three digit no.!";

    return 0;
}