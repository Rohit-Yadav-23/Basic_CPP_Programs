// max_element and min_element functions in vectors

// The "max_element" and "min_element" functions return *iterators* to the "maximum" and "minimum" elements in a range, respectively.

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main()
{
    vector<int> vec = {10, 20, 5, 40, 25};

    //                                  Finding the maximum element                                                   

    auto max = max_element(vec.begin(), vec.end()); // auto storage class is used here, which STORES the ADDRESS of the MAXIMUM ELEMENT ie returned by the max_function
    cout << "Maximum element is: " << *max << endl;
    //                                  👆
     //   *max  -->  VALUE AT "max ITERATOR" which is 40

    //                                      Finding the minimum element                                                   

    auto min = min_element(vec.begin(), vec.end()); // auto storage class STORES the ADDRESS of the MINIMUM ELEMENT ie returned by the min_function
    cout << "Minimum element is: " << *min << endl;
    //                                  👆
     //   *min  -->  VALUE AT "min ITERATOR" which is 5

    //                              Getting the index of the max and min elements                                         

    cout << "Index of maximum element: " << distance(vec.begin(), max) << endl;
    cout << "Index of minimum element: " << distance(vec.begin(), min) << endl;

    return 0;
}
