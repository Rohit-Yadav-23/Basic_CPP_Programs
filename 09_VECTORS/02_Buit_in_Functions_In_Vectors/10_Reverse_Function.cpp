//                                            REVERSE FUNCTION

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector <int> v;

    cout << "Enter the elements of vector : ";

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    reverse(v.begin(), v.end());        // Reverses the order of elements in the vector

    cout << "Elements in Reverse Order are : ";
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }

}