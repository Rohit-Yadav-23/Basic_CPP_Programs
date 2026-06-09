//                                       LOWER BOUND FUNCTION                                                       

// The "lower_bound FUNCTION" returns an iterator pointing to the first element in the range [first, last) that is "EQUAL to the GIVEN ELEMENT if it is FOUND" or the "NEXT GREATER ELEMENT if the ELEMENT is not FOUND".
//  - Syntax: lower_bound(first_iterator, last_iterator, value);
//  - Returns: An iterator pointing to the first element "IF the given ELEMENT is FOUND" or "NEXT GREATER ELEMENT if the element is NOT FOUND".
//    ARRAY MUST BE SORTED BEFORE USING lower_bound() FUNCTION.

#include <iostream>
#include <vector>
#include <algorithm> // For lower_bound
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};

    auto it = lower_bound(vec.begin(), vec.end(), 20);
    cout << "The lower bound of 20 is: " << *it << endl;

    int index = distance(vec.begin(), it);

    cout << "The index of the element not less than 25 is: " << index << endl << endl;




    it = lower_bound(vec.begin(), vec.end(), 25);
    cout << "The lower bound of 25 is: " << *it << endl;

    index = distance(vec.begin(), it);

    cout << "The index of the element not less than 25 is: " << index << endl << endl;;




    it = lower_bound(vec.begin(), vec.end(), 35);
    cout << "The lower bound of 35 is: " << *it << endl;

    index = distance(vec.begin(), it);

    cout << "The index of the element not less than 35 is: " << index << endl << endl;;




    it = lower_bound(vec.begin(), vec.end(), 55);       // It points to "vec.end()" as 55 is greater than all the elements in the vector.
    cout << "The lower bound of 55 is: " << *it << endl;   // Out of range --> So, prints any garbage value.

    index = distance(vec.begin(), it);

    cout << "The index of the element not less than 55 is: " << index << endl << endl;;

    return 0;

}