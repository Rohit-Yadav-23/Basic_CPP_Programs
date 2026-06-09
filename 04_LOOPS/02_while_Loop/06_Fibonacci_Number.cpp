// WAP to print Fibonacci Series.

#include <iostream>
using namespace std;

int main()
{

    int n, a = 0, b = 1, c;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    int i = 1;

    while (i <= n)
    {

        cout << a << " ";

        c = a + b;
        a = b;
        b = c;

        i++;
    }

    return 0;
}