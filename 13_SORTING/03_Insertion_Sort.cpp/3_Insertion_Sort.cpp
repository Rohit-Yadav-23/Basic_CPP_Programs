//                                      INSERTION SORT

#include <iostream>
using namespace std;

void insertionSort_1(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
}

void insertionSort_2(int brr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while ((j >= 1) and (brr[j - 1] > brr[j]))
        {
            swap(brr[j - 1], brr[j]);
            j--;
        }
    }
}

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    cout << endl;

    insertionSort_1(arr, n);

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    cout << endl
         << endl;

    int brr[] = {-1, -2, -3, -4, -5, -6, -7};
    n = sizeof(brr) / sizeof(int);

    for (int ele : brr)
    {
        cout << ele << " ";
    }

    cout << endl;

    insertionSort_2(brr, n);

    for (int ele : brr)
    {
        cout << ele << " ";
    }

    return 0;
}