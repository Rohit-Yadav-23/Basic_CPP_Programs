/*
                    Find the value of K after replacing every index of the array by |ai - K|

Given an array, arr[] containing n integers, the task is to find the RANGE of an integer (say K) such that after replacing each and every index of the array by |ai  - K| where (i ? [1, n]), results in a sorted array. If no such integer exists that satisfies the above condition then return -1.

Examples:
Input: arr[] = [10, 5, 4, 3, 2, 1]
Output: 8
Explanation: Upon performing the operation |ai-8|, we get [2, 3, 4, 5, 6, 7] which is sorted.

Input: arr[] = [1, 2, 3, 4, 5, 6]
Output: 0
Explanation: Since the array is already sorted so the value of K would be 0 in this case.
*/

#include <iostream>
#include <cfloat>
#include <algorithm>
using namespace std;

float max(float a, float b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}

float min(float a, float b)
{
    if (a < b)
    {
        return a;
    }

    return b;
}

void findKRange(int arr[], int n)
{
    float kmin = FLT_MIN;
    float kmax = FLT_MAX;
    bool flag = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] - arr[i + 1] >= 0)  // we will give value to kmin
        { 
            kmin = max(kmin, (arr[i] + arr[i + 1]) / 2.0);
        }

        else    // we will give value to kmax
        {  
            kmax = min(kmax, (arr[i] + arr[i + 1]) / 2.0); 
        }

        if (kmin > kmax)
        {
            flag = false;
            break;
        }
    }

    if (flag == false)
    {
        cout << "No Such Range Exists" << endl;
    }

    else if (kmin == kmax)
    {
        if (kmin - (int)kmin == 0)  //  If kmin is an integer, we will print it as it is
        { 
            cout << "There is only one value of k : " << kmin;
        }

        else
        {
            cout << "No Such Range Exists" << endl;
        }
    }

    else
    {
        if (kmin - (int)(kmin) > 0)  // If kmin is not an integer, we will increment it by 1 --> b/c we want the range of K (in int form)--> So, if kmin = 4.5 --> then, kmin = 5
        { 
            kmin = (int)(kmin) + 1;
        }

        cout << "Range of K is : [" << kmin << "," << (int)kmax << "]" << endl;
    }
}

int main()
{
    int arr[] = {5, 3, 10};

    findKRange(arr, sizeof(arr) / sizeof(arr[0]));

    int brr[] = {5, 3, 10, 3};

    findKRange(brr, sizeof(brr) / sizeof(brr[0]));

    return 0;
}