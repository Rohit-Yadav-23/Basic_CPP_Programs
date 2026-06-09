/*  Find the doublet values and INDICES in the VECTOR whose sum is equal to the given value x*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector <int> v(n);
    cout << "Enter the elements of vector : ";
    
    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    int x;
    cout << "Enter TARGET : ";
    cin >> x;


    cout << endl << "Doublets are : " << endl;

    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i] + v[j] == x)
            cout << "(" << v[i] << ", " << v[j] << ")"<< endl;
        }
    }

    cout << "Indices are : " << endl;

    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i] + v[j] == x)
            {
                cout << "(" << i << ", " << j << ")" << endl;
            }
        }
    }
    return 0;
}