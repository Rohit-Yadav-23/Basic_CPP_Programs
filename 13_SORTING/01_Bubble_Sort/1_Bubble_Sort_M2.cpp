//                                       BUBBLE SORT (Optimized Version)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++) //  just doing LITTLE BIT of OPTIMIZATION to reduce the number of comparisons
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);  // ADJACENT ELEMENTS are SWAPPED
            }
        }
    }
}

int main()
{
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8};
    int n = sizeof(arr) / sizeof(int);

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    cout << endl;

    bubbleSort(arr, n);

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}