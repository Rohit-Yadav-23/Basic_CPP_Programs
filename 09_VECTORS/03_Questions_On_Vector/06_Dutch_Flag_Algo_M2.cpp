// Dutch Flag Algorithm (Method 2)

// Second Method of Sorting vector elements ie 0, 1, 2 using DUTCH FLAG ALGORITHM
// 3 POINTERS APPROACH or ONE PASS ALGORITHM

// ONE PASS --> USE ONE LOOP ONLY

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> v;

    cout << "Enter elements of vector : ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (v[mid] == 2)
        {
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;

            high--;
        }

        else if (v[mid] == 0)
        {
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;

            low++;
            mid++;
        }

        else if (v[mid] == 1)
        {
            mid++;
        }
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}