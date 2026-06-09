//  Find Second Largest Element In Array In One Pass

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 10, 5, 20, 40, 60, 50, 40, 59, 5};
    int s = sizeof(arr) / sizeof(int);

    int max = INT_MIN;
    int max2;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (i > 0)
            max2 = arr[i - 1];

        if (arr[i] > max && max2 != max)
        {
            max2 = arr[i];
        }
    }

    cout << "Second Largest Element is : " << max2;
}