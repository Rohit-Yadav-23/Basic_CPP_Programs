//  Find the Factorial of Large Number

#include <iostream>
#include <climits>

using namespace std;
int main()
{
    const int n = 5;

    int arr[n];
    
    cout << "Enter " << n << " elements of array : ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int fact = 1;
    for (int i = 1; i <= max; i++)
    {
        fact *= i;
    }

    cout << fact;

    return 0;
}