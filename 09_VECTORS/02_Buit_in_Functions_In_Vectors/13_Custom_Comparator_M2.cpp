//     Custom Comparator in Vectors (Method - 2)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator function
bool customComparator(pair<int, int> &a, pair<int, int> &b)
{
    // Compare based on the first element
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    // If first elements are equal, compare based on the second element
    return a.second < b.second;
}

// This a is way of using custom Comparator in LAMBDA FUNCTION
auto customComparatorAuto = [](auto &a, auto &b)
{
    // Compare based on the first element
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    // If first elements are equal, compare based on the second element
    return a.second < b.second;
};

int main()
{
    vector<pair<int, int>> vec = {{3, 4}, {1, 2}, {5, 1}, {3, 2}, {1, 3}};

    // Sort the vector using the custom comparator
    sort(vec.begin(), vec.end(), customComparator);

    for (const auto &p : vec)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    sort(vec.begin(), vec.end(), customComparatorAuto);

    for (const auto &p : vec)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}

/*
Passing by value in your customComparator function is correct, but it can be inefficient for larger objects. In your case, pair<int, int> is small, so the performance impact is minimal. However, it's generally better to pass by reference to avoid unnecessary copying.

*/