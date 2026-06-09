//                       PUSH ZEROES to END while MAINTAINING the RELATIVE ORDER of other elements

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]);  // ADJACENT ELEMENTS are SWAPPED
            }
        }
    }
}

int main()
{
    int arr[] = {5, 0, 1, 2, 0, 0, 4, 0, 3};
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