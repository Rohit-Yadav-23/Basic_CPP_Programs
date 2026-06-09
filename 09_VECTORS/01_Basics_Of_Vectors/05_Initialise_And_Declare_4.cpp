//                      INITIALISATION OF VECTOR AT THE TIME OF DECLARATION

//                                   SIMILAR TO LIKE IN ARRAYS
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 40, 50, 60}; // This is CORRECT WAY of INITIALISING A VECTOR at the time of DECLARATION with INITIALIZER LIST

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << endl;

    vector<int> v2{10, 20, 30, 40, 50, 60}; // This is also a CORRECT WAY of INITIALISING A VECTOR at the time of DECLARATION

    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    cout << endl;

    vector<int> v3;
    v3 = {60, 70, 80};

    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";

    //     vector <int> v3[3];
    //      v3 = {60, 70, 80};  ---> This Gives ERROR

    // int arr[5];
    // arr = {10, 20, 30, 40};      --> This also gives us an ERROR
}