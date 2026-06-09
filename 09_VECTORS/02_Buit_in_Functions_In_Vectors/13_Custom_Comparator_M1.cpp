//                          Custom Comparator Function in C++ STL (Sort in Descending Order)
// The custom comparator function is defined as a separate function that returns true if the first argument should come before the second argument in the sorted order.
// The custom comparator function returns false if the second argument should come before the first argument in the sorted order.
// The sort() function is used to sort the vector using the custom comparator function.
// The sort() function sorts the vector according to the comparison logic defined in the custom comparator function.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator function
bool customComparator_1(int a, int b)
{
    if (a > b)
        return true; //  Sort in descending order

    return false;
}

//     We can also write it in this way

bool customComparator_2(int a, int b)
{
    return a < b; //  Sort in ascending order
}

int main()
{
    vector<int> vec = {5, 2, 8, 1, 3};

    // Sort the vector using the custom comparator
    sort(vec.begin(), vec.end(), customComparator_1);

    for (int num : vec)
    {
        cout << num << " ";
    }

    cout << endl;

    vector<int> vec2 = {5, 2, 8, 1, 3};

    sort(vec2.begin(), vec2.end(), customComparator_2);

    for (int num : vec2)
    {
        cout << num << " ";
    }

    return 0;
}