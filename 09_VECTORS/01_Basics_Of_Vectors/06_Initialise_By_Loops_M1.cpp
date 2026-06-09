
//              INITIALISATION OF VECTORS (USING LOOPS)

// CASE 1:      WHEN SIZE OF VECTOR IS GIVEN    (AT THE TIME OF DECLARATION)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v(5);              // Size of Vector is Given (at the time of declaration)

    cout << "Enter elements : ";
    for(int i=0; i<5; i++)
    {
        cin >> v[i];
    }

    cout << "Elements are : ";
    for(int i=0; i<5; i++)
    {
        cout << v[i] << " ";
    }

}