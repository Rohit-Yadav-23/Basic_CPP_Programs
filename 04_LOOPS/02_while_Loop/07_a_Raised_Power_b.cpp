// WAP to calculate a raised to the power b.

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    long long power = 1;

    cout << "Enter base number: ";
    cin >> a;

    cout << "Enter power: ";
    cin >> b;

    int i = 1;

    while (i <= b)
    {
        power = power * a;
        i++;
    }

    cout << "Result = " << power;

    return 0;
}