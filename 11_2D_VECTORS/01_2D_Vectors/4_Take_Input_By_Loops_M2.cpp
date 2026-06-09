// Taking Input In 2D vector by using loops (Method - 2)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    vector<vector<int>> v;
    cout << "Enter elements of 2D vector : \n";

    for (int i = 0; i < n; i++)
    {
        vector<int> m(n);

        for (int j = 0; j < n; j++)
        {
            cin >> m[j];
        }

        v.push_back(m);
    }

    cout << "Output of 2D vector : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}