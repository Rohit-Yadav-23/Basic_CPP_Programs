//              Find the last occurrence of x in Vector (Method 2)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector <int> v(n);
    cout << "Enter the elements of Vector : ";
    for(int i=0; i< v.size(); i++)
    {
        cin >> v[i];
    }

    int x;
    cout << "Enter the value of x : ";
    cin >> x;

    int idx = -1;
    for(int i=0; i<v.size(); i++)               // Aage se x ko find kar rahe hai vector me
    {
        if(x == v[i])
        idx = i;
    }

    cout << "Last Occurence of x is : " << idx;
}