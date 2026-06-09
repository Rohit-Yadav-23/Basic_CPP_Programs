//              Find the last occurrence of x in Vector (Method 1)

#include <iostream>
#include <vector>
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
        int a;
        cin >> a;
        v.push_back(a);
    }

    int x;
    cout << "Enter the value of x : ";
    cin >> x;

    int idx = -1;
    
    for(int i=v.size()-1 ; i>=0; i--)                       // Picchee se x ko find kar rahe hai vector me
    {
        if(x == v[i])
        {
            idx = i;
            break;
        }
    }

    cout << "Last Occurence of x : " << idx;
}