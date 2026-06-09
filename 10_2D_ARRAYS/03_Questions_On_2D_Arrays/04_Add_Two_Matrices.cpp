// Add two matrices of the same dimensions and print the result.

#include <iostream>
using namespace std;

int main()
{
    const int rows = 2;
    const int cols = 3;

    int A[rows][cols];
    int B[rows][cols];
    int C[rows][cols];

    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}