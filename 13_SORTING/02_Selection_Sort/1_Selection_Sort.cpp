//                                        SELECTION SORT

#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int minEle = INT_MAX;
        int minIdx = i;

        for (int j = i; j < n; j++)
        {
            if (minEle > arr[j])
            {
                minEle = arr[j];
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
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

    selectionSort(arr, n);

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}