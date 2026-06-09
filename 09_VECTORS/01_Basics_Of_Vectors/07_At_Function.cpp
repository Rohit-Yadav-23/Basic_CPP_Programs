/*
    "at()" Function

at function is basically used for 2 PURPOSES
1. PRINT the elements of VECTOR
2. UPDATE the values or elements in a vector
*/

// Syntax ==>   vector_variable_name.at(INDEX NUMBER) = UPDATED VALUE;

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // FIRST use of at function

    cout << v.at(2) << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    // SECOND use of at function

    v.at(0) = 50; // 0th index of vector variable v is updated from 10 to 50
    v.at(2) = 60; // 2nd index of vector variable v is updated from 30 to 60

    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}