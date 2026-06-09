// Score After Flipping Matrix

// LEETCODE --> 861

/*
    0 0 1 1                     1 1 1 1
    1 0 1 0         --->        1 0 0 1
    1 1 0 0                     1 1 1 1     */

#include <iostream>
#include <vector>

using namespace std;

int matrixScore(vector<vector<int>> &grid)
{
    int r = grid.size();
    int c = grid[0].size();

    // Step 1 : Making all the elements of first column to 1

    for (int i = 0; i < r; i++)
    {
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;

                else
                    grid[i][j] = 0;
            }
        }
    }

    // Step 2 : Count the no. of Zero's and One's --> In the COLUMNS

    for (int j = 0; j < c; j++)
    {
        int noz = 0;
        int noo = 0;
        for (int i = 0; i < r; i++)
        {
            if (grid[i][j] == 0)
                noz++;

            else
                noo++;
        }

        if (noz > noo) // Step 3 : If noz > noo --> Flip 0's to 1's and 1's to 0's
        {
            for (int i = 0; i < r; i++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;

                else
                    grid[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // Step 4 --> Convert the Binary Digits into Decimal Digit

    int sum_total = 0;
    for (int i = 0; i < r; i++)
    {
        int sum_row = 0, a = 1;
        for (int j = c - 1; j >= 0; j--)
        {
            sum_row = sum_row + grid[i][j] * a;
            a *= 2;
        }
        sum_total = sum_total + sum_row;
    }

    return sum_total;
}

int main()
{
    int r, c;
    cout << "Enter row : ";
    cin >> r;

    cout << "Enter Column : ";
    cin >> c;

    vector<vector<int>> v(r, vector<int>(c));

    cout << "Enter elements : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    cout << endl;

    int matrix_size = matrixScore(v);
    cout << endl
         << matrix_size;

    return 0;
}
