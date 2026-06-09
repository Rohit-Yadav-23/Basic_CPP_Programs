/*
    Sort Function in C++

    sort function is used to sort the elements of vector in ASCENDING ORDER*/

#include <iostream>
#include <vector>
#include <algorithm> // HEADER FILE

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(10);

    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";

    cout << endl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
}