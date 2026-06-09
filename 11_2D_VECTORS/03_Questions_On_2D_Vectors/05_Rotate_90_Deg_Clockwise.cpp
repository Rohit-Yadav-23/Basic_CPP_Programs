// Rotate a 2D array by 90 degrees in the clockwise direction.

// LEETCODE --> 48 --> ROTATE IMAGE

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        int se = 0;
        int le = matrix.size() - 1;
        while (se < le)
        {
            int temp = matrix[i][se];
            matrix[i][se] = matrix[i][le];
            matrix[i][le] = temp;
            se++;
            le--;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));

    cout << "Enter elements of 2d Vector : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    cout << endl;

    rotate(v);

    return 0;
}