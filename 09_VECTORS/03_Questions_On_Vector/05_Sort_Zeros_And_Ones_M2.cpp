//      SORT THE ARRAY'S OF 0'S AND 1'S

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> v;
    cout << "Enter the elements of vector in 0's and 1's form : ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int noz = 0;
    int noo = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            noz++;

        else
            noo++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
            v[i] = 0;

        else
            v[i] = 1;
    }

    cout << "Sorted vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}