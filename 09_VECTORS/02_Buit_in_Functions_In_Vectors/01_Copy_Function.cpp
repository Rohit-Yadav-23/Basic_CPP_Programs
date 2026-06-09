// Copy Function in Vectors

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2(vec1.size()); // Make sure vec2 has enough space

    // Copy elements from vec1 to vec2
    copy(vec1.begin(), vec1.end(), vec2.begin());

    cout << "Elements of vec2: ";
    for (int val : vec2)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
