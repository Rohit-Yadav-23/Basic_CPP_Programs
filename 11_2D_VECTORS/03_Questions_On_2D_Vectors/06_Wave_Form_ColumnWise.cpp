//  Print MATRIX in COLUMN-WISE WAVE FORM                                        

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };

    int rows = arr.size();
    int cols = arr[0].size();

    for (int j = 0; j < cols; j++)
    {
        if (j % 2 != 0)          //  Odd column -> Bottom to Top
        {
            int topIdx = 0, botIdx = rows - 1;
            
            while (topIdx < botIdx)
            {
                swap(arr[topIdx][j], arr[botIdx][j]);
                topIdx++;
                botIdx--;
            }
        }
    }

    cout << "Wave Form Elements:" << endl;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}