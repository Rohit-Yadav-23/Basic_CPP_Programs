// Find the second largest element in a 2D array.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int rows = 3;
    int cols = 3;

    int arr[rows][cols];

    cout << "Enter elements of matrix : \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }


    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find largest element
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    // Find second largest element
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > secondLargest && arr[i][j] != largest)
            {
                secondLargest = arr[i][j];
            }
        }
    }

    cout << "Largest Element = " << largest << endl;
    cout << "Second Largest Element = " << secondLargest << endl;

    return 0;
}