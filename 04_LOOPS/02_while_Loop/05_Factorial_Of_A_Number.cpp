// WAP to find factorial of a number

#include <iostream>
using namespace std;

int main()
{

    int num;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> num;

    int i = num;

    while (i >= 1)
    {
        fact = fact * i;
        i--;
    }

    cout << "Factorial = " << fact;

    return 0;
}