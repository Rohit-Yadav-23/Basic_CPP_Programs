
//              INITIALISATION OF VECTORS (USING LOOPS)

// CASE 1:      WHEN SIZE OF VECTOR IS GIVEN    (AT THE TIME OF DECLARATION)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // Size of Vector is NOT Given (at the time of declaration)

    cout << "Enter elements : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    cout << "Elements are : ";
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

/* Nothing prints in the terminal, b/c we haven't gave size to the vector
So, this means that no vector is generated yet ----> No, empty spaces have been created yet
So, that's why no elements are stored in the vector

To generate empty spaces, we have to use push_back function
because we have studied earlier that, push_back function makes empty spaces into the vector

So, in last initialising vectors with index number , without giving size (at the time of declaration) to a vector ===> PRINTS NOTHING
B/c NO EMPTY SPACES ARE GENERATED



TO OVERCOME THIS PROBLEM  ====> GO TO THE NEXT CODE*/