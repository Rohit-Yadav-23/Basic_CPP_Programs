// Find the NEXT PERMUTATION of VECTOR   -->  LEETCODE - 31

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of vector : ";
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];

    // STEP 1 -->  Find the PIVOT INDEX

    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            idx = i;
            break;
        }
    }

    // STEP 2 -->  Reverse the elements after pivot index

    if (idx != -1)
    {

        // int i = idx + 1;
        // int j = n-1;
        // while(i<=j)
        // {
        //     int temp = v[i];
        //     v[i] = v[j];
        //     v[j] = temp;
        //     i++;
        //     j--;
        // }

        //          OR

        reverse(v.begin() + idx + 1, v.end()); // --> Vector gives us a BUILT-IN FUNCTION to REVERSE its ELEMENT

        // STEP 3 -->  FINDING the element which is JUST GREATER than idx

        int next_idx = -1;
        for (int i = idx + 1; i < n; i++)
        {
            if (v[i] > v[idx])
            {
                next_idx = i;
                break;
            }
        }

        int temp = v[idx];
        v[idx] = v[next_idx];
        v[next_idx] = temp;

        cout << "Next Permutation is : ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
    }

    else
    {
        // int i=0;
        // int j=n-1;
        // while(i<j)
        // {
        //     int temp = v[i];
        //     v[i] = v[j];
        //     v[j] = temp;
        //     i++;
        //     j--;
        // }

        //       OR

        reverse(v.begin(), v.end());

        cout << "First Permutation is : ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
    }
}

// PIVOT element basically means that element which is smaller than its next element when we are moving from right to left in the vector.

//          LEFT ELEMENT < RIGHT ELEMENT