//   Write a program to print the row number having the maximum sum in a given matrix

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int r = 3, c = 4;

    int arr[r][c];
    cout << "Enter elements of matrix : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    }

    int sum = 0, row;
    int maxrow = INT_MIN;

    for (int i = 0; i < r; i++)
    {
        sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }

        maxrow = max(sum, maxrow);

        if (maxrow == sum)
            row = i + 1;
    }

    cout << "\nRow that has Maximium Sum : " << row;
    return 0;
}