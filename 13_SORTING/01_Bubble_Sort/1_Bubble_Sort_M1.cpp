//                                      BUBBLE SORT

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)  // n-1 PASSES
    {
        for (int j = 0; j < n - 1; j++)
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

//    Time Complexity --> O(n^2)
//    Time Complexity of BUILT IN SORT FUNCTION --> O(n*logn)