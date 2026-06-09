// Count the number of triplets with sum equal to x in an array

#include <iostream>
using namespace std;

int main()
{
    const int n = 5;

    int arr[n];
    
    cout << "Enter " << n << " elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value of x : ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                    count++;
            }
        }
    }

    cout << "Number of triplets with sum equal to " << x << " is : " << count;
}