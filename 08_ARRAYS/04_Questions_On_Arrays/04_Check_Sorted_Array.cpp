// Check if the given array is sorted or not

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

    bool flag = false;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                flag = true;
                break;
            }

            if (flag == true)
                break;
        }
    }

    if (flag == true)
        cout << "Unsorted Array .....";
    else
        cout << "Sorted Array....";
}