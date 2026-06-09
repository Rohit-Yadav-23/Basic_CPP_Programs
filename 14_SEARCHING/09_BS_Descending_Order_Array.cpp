//                   BINARY SEARCH on DESCENDING ORDER ARRAY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {123, 105, 95, 82, 70, 61, 58, 42, 39, 20, 16, 2, -5};

    int loIdx = arr.size() - 1;
    int hiIdx = 0;

    int target;
    cout << "Enter Target Element : ";
    cin >> target;

    bool isPresent = false;

    while (hiIdx <= loIdx)
    {
        int midIdx = hiIdx + (loIdx - hiIdx) / 2;

        if (arr[midIdx] == target)
        {
            cout << "Target is Found" << endl;
            isPresent = true;
            break;
        }

        else if (arr[midIdx] < target)
        {
            loIdx = midIdx - 1;
        }

        else
        {
            hiIdx = midIdx + 1;
        }
    }

    if (isPresent == false)
    {
        cout << "Target is NOT found" << endl;
    }

    return 0;
}