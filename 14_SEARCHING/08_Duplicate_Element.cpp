/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]  inclusive in sorted order. There is only one repeated number in nums, return this repeated number.

Input 1: arr[] = {1,2,3,3,4}
Output 1: 3

Input 2: arr[] = {1,2,2,3,4,5}
Output 2: 2
*/

#include <bits/stdc++.h>
using namespace std;

void findDuplicate(vector<int> &arr)
{
    int loIdx = 0, hiIdx = arr.size() - 1;

    while (loIdx <= hiIdx)
    {
        int midIdx = loIdx + (hiIdx - loIdx) / 2;

        if ((arr[midIdx] == arr[midIdx + 1]) || (arr[midIdx] == arr[midIdx - 1]))
        {
            cout << arr[midIdx] << endl;
            break;
        }

        else if (arr[midIdx] == midIdx + 1)
        {
            loIdx = midIdx + 1;
        }

        else
        {
            hiIdx = midIdx - 1;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the ELEMENTS of SORTED ARRAY : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findDuplicate(arr);
}