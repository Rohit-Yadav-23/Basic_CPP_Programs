//                                             UPPER BOUND FUNCTION                                       

//  The "upper_bound FUNCTION" returns an iterator pointing to the first element in the range [first, last) that is greater than the given value.
//    - Syntax: upper_bound(first_iterator, last_iterator, value);
//    - Returns: An iterator pointing to the first element greater than the given value.
//      ARRAY MUST BE SORTED BEFORE USING upper_bound() FUNCTION.

#include <iostream>
#include <vector>
#include <algorithm> // For upper_bound
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};

    auto it = upper_bound(vec.begin(), vec.end(), 25);
    cout << "The upper bound of 25 is: " << *it << endl;

    int index = distance(vec.begin(), it);

    cout << "The index of the element greater than 25 is: " << index << endl << endl;




    it = upper_bound(vec.begin(), vec.end(), 35);
    cout << "The upper bound of 35 is: " << *it << endl;

    index = distance(vec.begin(), it);

    cout << "The index of the element greater than 35 is: " << index << endl << endl;;




    it = upper_bound(vec.begin(), vec.end(), 55);       //   it points to "vec.end()" as 55 is greater than all the elements in the vector.  
    cout << "The upper bound of 55 is: " << *it << endl;   //  Out of range --> So, prints any garbage value.

    index = distance(vec.begin(), it);

    cout << "The index of the element greater than 55 is: " << index << endl << endl;;

    return 0;
}