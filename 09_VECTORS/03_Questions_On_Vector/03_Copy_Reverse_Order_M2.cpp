/*  Write a program to copy the contents of one vector into another in the reverse order (Method 2) */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector <int> v1;
    cout << "Enter the elements of vector : ";
    
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    vector <int> v2(v1.size());

    for(int i=0; i<v2.size(); i++)
    {
        v2[v1.size()-1-i] = v1[i];
    }

    cout << "Elements in REVERSE ORDER are : ";

    for(int i=0; i<v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
}