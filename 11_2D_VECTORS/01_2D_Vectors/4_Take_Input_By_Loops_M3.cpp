// Taking Input In 2D vector by using loops (Method - 3)

#include <iostream>
#include <vector>
using namespace std;

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
        vector<int> a(c);
        for (int j = 0; j < c; j++)
        {
            cin >> a[j];
            v[i][j] = a[j];
        }
    }

    cout << "Output of 2D vector are : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
