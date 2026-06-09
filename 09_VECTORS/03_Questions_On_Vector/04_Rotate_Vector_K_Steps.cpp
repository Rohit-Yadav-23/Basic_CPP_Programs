/*  Rotate the given vector 'v' by k steps, where k is a non-negative
Note: k can be greater than n as well where n is the size of the vector 'v'*/

#include <iostream>
#include <vector>
using namespace std;

void Rotate_Vector(vector<int> &a, int fe, int le)
{

    while (fe <= le)
    {
        int temp = a[fe];
        a[fe] = a[le];
        a[le] = temp;

        fe++;
        le--;
    }
}
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

    int k;
    cout << "Enter no. of rotating steps : ";
    cin >> k;

    if (k > n)
    {
        k = k % n;
    }
    Rotate_Vector(v, 0, n - k - 1); // 0 se lekar k se pehale tak ke saare elements ko REVERSE kar do        --> LEFT PART
    Rotate_Vector(v, n - k, n - 1); // phir k se lekar ke last waale element tak ke saare elements ko REVERSE kar do --> RIGHT PART
    Rotate_Vector(v, 0, n - 1);     // phir poore vector (ie array) ko REVERSE kar do           ----> COMPLETE ARRAY

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

// if k==n  --> Then VECTOR REVERSES COMPLETELY (OR ROTATED COMPLETELY)
// or in other words, if k==n, then this means k%n ==> 0
// So, no swaps will be done
// There will be no change in the POSITION OF ELEMENTS OF VECTOR