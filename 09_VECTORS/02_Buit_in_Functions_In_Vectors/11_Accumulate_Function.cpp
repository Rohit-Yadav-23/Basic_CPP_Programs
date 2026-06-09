// Accumulate Function in Vectors

// "accumulate function" is used to sum all elements of a vector. 


#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int sum = accumulate(vec.begin(), vec.end(), 0);          // 0 is the initial value of the sum.

    cout << "Sum of all elements in the vector: " << sum << endl;

    sum = accumulate(vec.begin(), vec.end(), 1);           // 1 is the initial value of the sum.

    cout << "Sum of all elements in the vector: " << sum << endl;

    return 0;
}

//      Syntax: accumulate(start, end, initial_value)

//      start: Iterator pointing to the first element of the range.

//      end: Iterator pointing to the last element of the range.

//      initial_value: Initial value of the sum.