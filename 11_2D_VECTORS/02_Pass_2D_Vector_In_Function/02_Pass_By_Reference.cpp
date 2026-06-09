// Passing 2D Vector in Function by Reference

#include <iostream>
#include <vector>
using namespace std;

void change(vector<vector<int>> &arr)
{
    arr[0][0] = 100;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2},
        {3, 4}};

    change(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}