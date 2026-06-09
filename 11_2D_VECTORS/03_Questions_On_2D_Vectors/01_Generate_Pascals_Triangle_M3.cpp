// Generate Pascal's Triangle in "Generate Function" in a SINGLE LOOP (Using the property of Pascal's Triangle) (Method - 3)

// LEETCODE --> 118

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> Generate(int r)
{
    vector<vector<int>> v;

    for (int i = 0; i < r; i++)
    {
        vector<int> a(i + 1);
        v.push_back(a);

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                v[i][j] = 1;

            else
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }
    return v;
}

int main()
{
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;
    vector<vector<int>> Receive = Generate(n);

    cout << "Pascal's Triangle : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << Receive[i][j] << " ";
        }
        cout << endl;
    }
}