// ASSIGN FUNCTION IN VECTOR

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.assign(5, 9); // vector v gets the size of 5 and IT'S all ELEMENTS are INITIALISES by 9

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

/* assign function GIVES the SIZE to the VECTOR and INITIALISES the VECTOR

FIRST ARGUMENT of assign function gives the SIZE to the VECTOR
SECOND ARGUMENT of assign function gives the ELEMENT to the VECTOR ie INITIALISES the VECTOR*/