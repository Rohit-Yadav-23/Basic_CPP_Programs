// we can print a lot of elements of vector using 'size function' in loop

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

/*
pop_back() function removes the last element of the vector, and it also reduces the size of the vector by 1. 

But the most important point is that pop_back() function does not change the capacity of the vector, which has been discussed in the next example.
*/