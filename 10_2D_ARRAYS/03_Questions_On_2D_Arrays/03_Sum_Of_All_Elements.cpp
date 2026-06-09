// Find the sum of all elements in a 2D array.

#include <iostream>
using namespace std;

int main()
{
    const int r = 3;
    const int c = 4;
    
    int arr[r][c];
    cout << "Enter elements of matrix : \n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    cout << "Sum of elements is : " << sum;
    return 0;
}