// FRONT() FUNCTION IN VECTOR

//  front() function returns the FIRST ELEMENT of the vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "The first element in the vector is: " << v.front() << endl;

    cout << endl << v.front() +1 << endl;

    cout << endl << v.front() +4 << endl;

    return 0;
}