//              SORT the PAIR of ELEMENTS in VECTOR of PAIRS using CUSTOM COMPARATOR FUNCTION in DESCENDING ORDER

#include <bits/stdc++.h>
using namespace std;

// Custom comparator function
bool customComparator_1(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first) //
        return a.first > b.first;

    return a.second < b.second; 
}

bool customComparator_2(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first) 
        return a.first > b.first;

    return a.second > b.second; 
}

bool customComparator_3(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second) 
        return a.second > b.second;

    return a.first < b.first; 
}

bool customComparator_4(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second) 
        return a.second > b.second;

    return a.first > b.first; 
}

int main()
{
    vector<pair<int, int>> vec = {{3, 1}, {1, 5}, {2, 7}, {3, 3}, {1, 2}, {2, 4}, {3, 2}, {1, 3}};

    sort(vec.begin(), vec.end(), customComparator_1);

    for (const auto &p : vec)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl
         << endl;

    sort(vec.begin(), vec.end(), customComparator_2);

    for (const auto &p : vec)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl
         << endl;

    sort(vec.begin(), vec.end(), customComparator_3);

    for (const auto &p : vec)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl
         << endl;

    sort(vec.begin(), vec.end(), customComparator_4);

    for (const auto &p : vec)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl
         << endl;

    return 0;
}
