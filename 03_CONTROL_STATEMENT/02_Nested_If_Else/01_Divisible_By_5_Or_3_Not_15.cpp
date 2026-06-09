// Take positive integer as input and tell if it is divisible by 5 or 3 but not divisble by 15

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if ((n % 5 == 0) || (n % 3 == 0)) // if((n%15==0 || (n%3==0)) && (n%15 != 0))
    {
        if (n % 15 != 0)
        {
            cout << "Yes";
        }

        else
            cout << "Not matching condition";
    }

    else
        cout << "Not matching condition";

    return 0;
}