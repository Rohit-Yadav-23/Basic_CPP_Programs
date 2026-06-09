// Check whether the given number is divisible by 5 and 3 both or not.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if ((n % 5 == 0) && (n % 3 == 0))
        cout << n << " is divisible by 5 and 3 both!";

    else
        cout << n << " is not divisible";

    return 0;
}