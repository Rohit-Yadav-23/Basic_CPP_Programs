// WAP to print "I Respect Myself" n times using for loop.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the range of number list : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}