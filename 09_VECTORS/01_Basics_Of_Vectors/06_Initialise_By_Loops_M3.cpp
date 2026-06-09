
//              INITIALISATION OF VECTORS (USING LOOPS)

// CASE 2:      WHEN SIZE OF VECTOR IS NOT GIVEN (AT THE TIME OF DECLARATION)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;                      // Size of Vector is NOT Given (at the time of declaration)

    cout << "Enter elements : ";
    for (int i = 0; i < 5; i++)
    {
        int x;                          // We have to create a variable & insert the elements into this variable
        cin >> x;
        v.push_back(x);          // B/c the input values of the variable x is not inserted into the vector (by the help of push_back fun)
    }

    cout << "Elements are : ";
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
}

/*  Here, the size of vector is not given at the time of declaration
So, it becomes compulsory for us to use push_back function, b/c push_back function creates an empty space in the vector and Hence, we can easily insert the elements into the vector.
*/