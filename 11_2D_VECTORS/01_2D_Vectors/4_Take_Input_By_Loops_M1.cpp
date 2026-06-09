// Taking Input In 2D vector by using loops (Method - 1)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    vector<vector<int>> v;

    cout << "Enter the elements of 2D vector : \n";

    for (int i = 0; i < n; i++)
    {
        vector<int> m;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            m.push_back(x);
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