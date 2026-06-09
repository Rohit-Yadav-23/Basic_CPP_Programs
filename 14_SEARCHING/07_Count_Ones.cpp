/*
    Q2:  Given a sorted binary array, efficiently count the total number of 1’s in it.                  

    Input 1 : a = [0,0,0,0,1,1]
    Output 1 : 2

    Input 2 : a = [0,0,1,1,1,1]
    Output 2 : 4
*/


#include <bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int first = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == 1)
        {
            first = mid;
            high = mid - 1;   // search on left side
        }
        else
        {
            low = mid + 1;
        }
    }

    if(first == -1)
        return 0;

    return n - first;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Total number of 1's = " << countOnes(arr, n);

    return 0;
}