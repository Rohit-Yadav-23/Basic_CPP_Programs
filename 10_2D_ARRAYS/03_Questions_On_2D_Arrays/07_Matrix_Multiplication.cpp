// Perform matrix multiplication of two matrices.

#include <iostream>
using namespace std;

int main()
{
    
    int r1 = 2, c1 = 3;
    int r2 = 3, c2 = 4;

    if (c1 == r2)
    {
        int arr[r1][c1];
        cout << "\nEnter elements of First Matrix : \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> arr[i][j];
            }
        }

        int brr[r2][c2];
        cout << "\nEnter elements of Second Matrix : \n";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> brr[i][j];
            }
        }

        int rrr[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                rrr[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    rrr[i][j] = rrr[i][j] + arr[i][k] * brr[k][j];
                }
            }
        }

        cout << "\nMatrix Multilication : \n";

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << rrr[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
        cout << "\nMultiplication is Not Possible !";

    return 0;
}