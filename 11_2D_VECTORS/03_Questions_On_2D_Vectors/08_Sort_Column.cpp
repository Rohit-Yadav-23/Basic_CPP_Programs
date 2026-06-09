// SORT ALL COLUMNS of a 2D vector where no. of rows and no. of columns are EQUAL
//                  SORT COLUMNS of n*n 2D MATRIX

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() 
{
    vector<vector<int>> vec = {
        {80, 20, 50},
        {30, 70, 90},
        {10, 60, 40}
    };


    // Step 1: Transpose the 2D vector
    for (int i = 0; i < vec.size(); ++i)
    {
        for (int j = 0; j < i; ++j) 
            swap(vec[i][j], vec[j][i]);
    }


    // Step 2: Sort each row (which corresponds to the original columns)
    for (int i = 0; i < vec.size(); ++i)
        sort(vec[i].begin(), vec[i].end());


    // Step 3: Transpose back to get the sorted columns
    for (int i = 0; i < vec.size(); ++i)
    {
        for (int j = 0; j < i; ++j) 
        swap(vec[i][j], vec[j][i]);
    }


    for (int i = 0; i < vec.size(); ++i) 
    {
        for (int j = 0; j < vec[i].size(); ++j)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    return 0;
}