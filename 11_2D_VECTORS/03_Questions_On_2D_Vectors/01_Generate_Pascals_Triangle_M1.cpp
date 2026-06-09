// Generate Pascal's Triangle by Calculating the Combinations (Using Factorials) (Method - 1)

// LEETCODE --> 118

#include <iostream>
#include <vector>
using namespace std;

int factorial(int a, int b)
{
    int facti = 1, factj = 1, factij = 1;
    
    for (int i = a; i >= 1; i--)
    {
        facti = facti * i;
    }

    for (int i = b; i >= 1; i--)
    {
        factj = factj * i;
    }

    for (int i = a - b; i >= 1; i--)
    {
        factij = factij * i;
    }

    return (facti) / (factij * factj);
}

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        vector<int> m;

        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == (i + 1))
                m.push_back(1);

            else
                m.push_back(factorial(i, j));
        }

        v.push_back(m);
    }

    cout << "Output of 2D vector : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}