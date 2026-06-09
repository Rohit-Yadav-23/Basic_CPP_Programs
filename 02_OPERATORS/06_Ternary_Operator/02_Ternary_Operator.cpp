// Ternary Operator (?:)

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    int max = (a > b) ? a : b;

    cout << "Largest number is: " << max;

    return 0;
}