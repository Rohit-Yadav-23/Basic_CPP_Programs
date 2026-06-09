// Find Largest Element is 2D Matrix

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    const int  m = 4;
    const int n = 3;

    int arr[m][n];
    cout << "Enter elements of Matrix : \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int max_el = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max_el)
                max_el = arr[i][j];
        }
    }
    cout << "Maximum Element of Matrix is : " << max_el;
    return 0;
}