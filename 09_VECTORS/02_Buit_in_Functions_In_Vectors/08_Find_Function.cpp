// Find Function in Vectors

// find function is used to FIND the "LOCATION" or "INDEX NO. OF THE ELEMENT"

//  find function ==> RETURNS AN ITERATOR ie ADDRESS of that PARTICULAR ELEMENT

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v = {60, 60, 30, 60, 10, 70, 60, 50, 20, 40, 60, 60, 30};

    auto location = find(v.begin(), v.end(), 60);

    cout << "VALUE : " << *location; //  "location" is an ITERATOR ie a variable which stores the ADDRESS of that DATA --> which "find function" RETURNS

    //  FUNCTION for finding the ACTUAL INDEX NO.

    int idx = distance(v.begin(), location);

    cout << "\nINDEX NO : " << idx;

    location = find(v.begin(), v.end(), 10);

    cout << "\n\nVALUE : " << *location;                                //  this *location prints the VALUE ie --> 10
    cout << "\nINDEX NO : " << distance(v.begin(), location) << "\n\n"; //  this function will PRINT the ACTUAL INDEX NO. of that PARTICULAR LOCATION where the REQUIRED VALUE or DATA is STORED

    location = find(v.begin(), v.end(), 160);

    if (location != v.end())
    {
        cout << "VALUE : " << *location;
        int idx = distance(v.begin(), location);
        cout << "\nINDEX NO : " << idx;
    }

    else
        cout << "Value 160 not found in the vector.";
}

// If the find function does not find the value you are searching for in a vector, it returns an iterator to the end of the range, which is v.end(). This iterator does not point to a valid element in the vector, so you should always check if the iterator is equal to v.end() before dereferencing it