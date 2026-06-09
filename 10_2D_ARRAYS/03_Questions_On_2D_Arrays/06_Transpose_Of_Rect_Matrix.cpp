// Print TRANSPOSE of a RECTANGULAR MATRIX and Store in a new matrix

#include <iostream>
using namespace std;

int main()
{
    int r = 4, c = 5;

    int arr[r][c];
    cout << "Enter elements of matrix : \n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int brr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    cout << "Transpose of Rectangular Matrix : \n";

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}