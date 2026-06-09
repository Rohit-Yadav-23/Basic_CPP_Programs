// Check whether the given number is divisible by 5 and 3 both or not using nested if else statement.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if (n % 5 == 0)
    {
        if (n % 3 == 0)
            cout << "No is divisible by both 5 and 3";

        else
            cout << "No is only divisible by 5 but not by 3";
    }

    else
        cout << "No is not divisible by 5";

    return 0;
}