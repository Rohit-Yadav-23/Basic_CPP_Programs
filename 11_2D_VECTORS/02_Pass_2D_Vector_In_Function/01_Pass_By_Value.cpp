// Passing 2D Vector in Function by Value

#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    print(arr);

    return 0;
}

/*
    When passed by value: "the entire 2D vector gets copied."

    For large matrices this wastes "MEMORY" and "TIME". So generally we avoid it.
*/