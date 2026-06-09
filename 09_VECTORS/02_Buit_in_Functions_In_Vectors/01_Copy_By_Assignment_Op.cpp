// COPYING a VECTOR using ASSIGNMENT OPERATOR

#include <iostream>
#include <vector>
#include <algorithm> // For copy function
using namespace std;

int main()
{
    //                           METHOD --> 1

    vector<int> vec1 = {1, 2, 3, 4, 5};

    vector<int> vec2(vec1.size()); // Make sure vec2 has enough space

    vec2 = vec1; // Copy elements from vec1 to vec2  --> USING ASSIGNMENT OPERATOR

    cout << "Elements of vec2 : ";
    for (int ele : vec2)
        cout << ele << " ";

    //                          METHOD --> 2

    cout << "\nElements of vec3 : ";
    vector<int> vec3 = vec1;
    for (int ele : vec3)
        cout << ele << " ";

    //                          METHOD --> 3

    cout << "\nElements of vec4 : ";
    vector<int> &vec4 = vec1;
    for (int ele : vec4)
        cout << ele << " ";

    return 0;
}

// METHOD NO. 2 and 3 are the "BEST"

/*
Using the assignment operator:
vector <int> vec2;
vec2 = vec1; // vec2 now contains the same elements as vec1

but by using assigment operator, we can't assign elements of one array into another array
int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    arr2 = arr1;  -->   This will give us "ERROR"

*/