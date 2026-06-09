//      Sorting of vectors in descending order using built-in functions

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {6, 5, 3, 2, 8, 10, 9};

    sort(v.begin(), v.end(), greater<int>());
    //         greater<int>() is a built-in function that sorts the vector in descending order

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
