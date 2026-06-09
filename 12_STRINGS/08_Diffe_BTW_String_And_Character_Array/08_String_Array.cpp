// String Array in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr[5] = {"Rohit", "Yadav", "is", "the", "best"};

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl << arr; // This will print the ADDRESS of the FIRST ELEMENT

    // arr is a STRING TYPE ARRAY which stores MULTIPLE STRINGS as an ELEMENT into it

    return 0;
}