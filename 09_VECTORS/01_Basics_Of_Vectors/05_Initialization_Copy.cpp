// COPY INITIALIZATION ----> Initializes a vector as a copy of another vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 40, 50};

    vector<int> v2(v1);
    //             ⬆️
    // now, all the elements of vector v1 are COPIED into the vector v2

    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    return 0;
}