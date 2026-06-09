// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

//  LEETCODE --> 119

#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<vector<int>> v;
    vector<int> b;

    for (int i = 0; i <= rowIndex; i++)
    {
        vector<int> a(i + 1);
        v.push_back(a);

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                v[i][j] = 1;

            else
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        }

        if (i == rowIndex)
        {
            for (int j = 0; j <= i; j++)
            {
                b.push_back(v[i][j]);
            }
        }
    }
    return b;
}

int main()
{
    int n;
    cout << "Enter Row No. : ";
    cin >> n;

    vector<int> Print_Desired_Row = getRow(n);

    for (int i = 0; i <= n; i++)
        cout << Print_Desired_Row[i] << " ";

    return 0;
}