// Unique Function in Vectors

// Unique function is used to find the unique elements in a vector
// Unique functions removes all the duplicate elements Present in vector
// But we have to firstly, sort the vector in ascending order --> So, that all the duplicates elements comes closer to each other

#include <iostream>
#include <vector>
#include <algorithm>        

using namespace std;

int main()
{

    vector <int> vec = {60, 70, 10, 30, 60, 10, 70, 60, 50, 20, 40, 100, 60, 30};

    sort(vec.begin(), vec.end());

    auto lastEle = unique(vec.begin(), vec.end());

    vec.erase(lastEle, vec.end());       // As, duplicate elements are removed from the vector --> Empty Spaces are generated --> erase function remove these empty spaces

    cout << "Unique elements of vector : ";
    for(int ele : vec)
        cout << ele << " ";
}

