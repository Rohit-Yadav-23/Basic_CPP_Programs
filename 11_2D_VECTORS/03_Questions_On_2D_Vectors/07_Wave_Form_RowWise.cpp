//  Print MATRIX in ROW-WISE WAVE FORM

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of row or matrix : ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of Matrix : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int se = 0;
        int le = n - 1;

        for (int j = 0; j < n; j++)
        {
            if (i % 2 != 0 && (se <= le))
            {
                int temp = matrix[i][se];
                matrix[i][se] = matrix[i][le];
                matrix[i][le] = temp;
                se++;
                le--;
            }
        }
    }

    cout << endl << "Elements in WAVE FORM : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}