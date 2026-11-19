//                                             Optimized Bubble Sort                                         

// Optimized Bubble Sort is an improved version of the traditional Bubble Sort algorithm. It reduces the number of passes through the array by keeping track of whether any swaps were made during a pass. If no swaps were made, the array is already sorted, and the algorithm can terminate early, improving efficiency.

// Which means that "To Check whether the Array is Already Sorted or Not" --> We, Simply used a "Optimized Bubble Sort" Algorithm to Reduce the Time Complexity of Bubble Sort Algorithm in BEST CASE --> O(n) --> Which is Too LOW

// That means we can check whether the array is already sorted or not in the first pass itself, ie in just O(n) time complexity.


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swapping occurred, array is sorted
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    bubbleSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
