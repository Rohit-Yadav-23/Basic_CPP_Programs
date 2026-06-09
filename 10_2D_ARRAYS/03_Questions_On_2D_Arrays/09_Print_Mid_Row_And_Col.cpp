/*  Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...*/

#include <iostream>
using namespace std;

void Print_Mid_Row_N_Col(int a, int b, int *brr)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == a / 2 or j == b / 2)
                cout << *(brr + i * b + j) << " ";

            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int r = 5, c = 5;

    int arr[r][c];
    cout << "Enter the elements of array : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    }

    cout << endl;
    Print_Mid_Row_N_Col(r, c, (int *)arr);

    return 0;
}