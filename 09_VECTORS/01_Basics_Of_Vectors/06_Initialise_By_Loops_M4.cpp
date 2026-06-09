
//              INITIALISATION OF VECTORS (USING LOOPS)

// CASE 2:      WHEN SIZE OF VECTOR IS NOT GIVEN (AT THE TIME OF DECLARATION)

//              BUT THE SIZE IS GIVEN BY THE USER (BUT NOT AT THE TIME OF DECLARATION OF VECTOR)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;                      // Size of Vector is NOT Given (at the time of declaration)

    int n;
    cout << "Enter the size of vector : ";  // Size of vector is defined by the user
    cin >> n;

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)         // Size of vector is now becomes user defined
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

/*  Here, the size of vector is not given at the time of declaration
So, it becomes compulsory for us to use push_back function, b/c push_back function creates an empty space in the vector
and Hence, we can easily insert the elements into the vector
*/