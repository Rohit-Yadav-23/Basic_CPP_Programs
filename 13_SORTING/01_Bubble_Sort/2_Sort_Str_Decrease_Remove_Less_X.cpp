//          SORT a STRING in DECREASING ORDER of values associated after REMOVAL of values SMALLER than X.

#include <iostream>
using namespace std;

string bubbleSort(string str)
{
    string remLesX = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'X')
        {
            remLesX.push_back(str[i]);
        }
    }

    int n = remLesX.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (remLesX[j] < remLesX[j + 1])
            {
                swap(remLesX[j], remLesX[j + 1]);  // ADJACENT ELEMENTS are SWAPPED
            }
        }
    }

    return remLesX;
}

int main()
{
    string str = "AZYZXBDJKX";

    for (char ele : str)
    {
        cout << ele << " ";
    }

    cout << endl;

    str = bubbleSort(str);

    for (char ele : str)
    {
        cout << ele << " ";
    }

    return 0;
}