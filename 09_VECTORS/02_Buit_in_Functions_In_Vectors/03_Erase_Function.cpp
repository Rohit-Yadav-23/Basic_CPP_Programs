// ERASE FUNCTION IN VECTOR

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    v.erase(v.begin()); // Remove the first element

    for (int i : v)
    {
        cout << i << " ";
    }

    vector<int>::iterator it = v.erase(v.begin()); // Remove the Second element

    cout << endl << endl << *it << endl;

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    vector<int> a = {60, 70, 80, 90, 100, 110};

    a.erase(a.begin() + 4); // Remove the 5th Element ie Remove the 4th indexed element
    //                  ⬆️
    // Write the Index no.

    cout << endl;
    
    for (int ele : a)
        cout << ele << " ";

    return 0;
}