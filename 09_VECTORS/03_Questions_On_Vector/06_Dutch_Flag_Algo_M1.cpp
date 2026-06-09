// Dutch Flag Algorithm (Method 1) 

// This is Dutch Flag Algorithm because we are sorting 3 types of elements (0s, 1s and 2s) in a vector.

// Leet Code --> 75 or SORT COLORS

// This method is called as TWO PASS ALGORITHM

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> v;
    cout << "Enter the elements of vector v : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int noz = 0;
    int no1 = 0;
    int no2 = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            noz++;

        else if (v[i] == 1)
            no1++;

        else if (v[i] == 2)
            no2++;
    }

    cout << endl
         << "Sorted Vector : ";

    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
            v[i] = 0;

        else if (i < (noz + no1))
            v[i] = 1;

        else
            v[i] = 2;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}