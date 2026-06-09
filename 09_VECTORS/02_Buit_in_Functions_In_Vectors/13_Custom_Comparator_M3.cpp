/*
SORT the PAIR of ELEMENTS in VECTOR of PAIRS using CUSTOM COMPARATOR FUNCTION in ASCENDING ORDER

custom comparator function ie "customComparator" is used to define the comparison logic for sorting the elements of a vector of pairs.
The custom comparator function is passed as the third argument to the sort function.
The custom comparator function takes two arguments of type pair<int, int> and returns a boolean value.
*/

#include <bits/stdc++.h>
using namespace std;

// Custom comparator function
bool customComparator_1(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first) //  sort by the first element in "ASCENDING ORDER"
        return a.first < b.first;

    return a.second < b.second; // if both "first elements" are equal, sort by the second element in "ASCENDING ORDER"
}



bool customComparator_2(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first) //   sort by the first element in "ASCENDING ORDER"
        return a.first < b.first;

    return a.second > b.second; // if both "first elements" are equal, sort by the second element in "DESCENDING ORDER"
}



bool customComparator_3(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second) //  sort by the second element in "ASCENDING ORDER"
        return a.second < b.second;

    return a.first < b.first; // if both "second elements" are equal, sort by the first element in "ASCENDING ORDER"
}



bool customComparator_4(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second) // sort by the second element in "ASCENDING ORDER"
        return a.second < b.second;

    return a.first > b.first; // if both "second elements" are equal, sort by the first element in "DESCENDING ORDER"
}

int main()
{
    vector<pair<int, int>> v = {{3, 1}, {1, 5}, {2, 7}, {3, 3}, {1, 2}, {2, 4}, {3, 2}, {1, 3}};

    cout << "Before sorting   :   ";
    for (pair<int, int> ele : v)
        cout << "(" << ele.first << ", " << ele.second << ")   ";

    sort(v.begin(), v.end(), customComparator_1);

    cout << "\n\nAfter sorting 1  :   ";
    for (auto ele : v)
        cout << "(" << ele.first << ", " << ele.second << ")   ";

    sort(v.begin(), v.end(), customComparator_2);

    cout << "\n\nAfter sorting 2  :   ";
    for (auto ele : v)
        cout << "(" << ele.first << ", " << ele.second << ")   ";

    sort(v.begin(), v.end(), customComparator_3);

    cout << "\n\nAfter sorting 3  :   ";
    for (auto ele : v)
        cout << "(" << ele.first << ", " << ele.second << ")   ";

    sort(v.begin(), v.end(), customComparator_4);

    cout << "\n\nAfter sorting 4  :   ";
    for (auto ele : v)
        cout << "(" << ele.first << ", " << ele.second << ")   ";
}