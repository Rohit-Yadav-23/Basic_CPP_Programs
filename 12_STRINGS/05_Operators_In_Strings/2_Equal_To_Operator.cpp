// Equal to operator in strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Rohit Yadav !!!!";
    string str2;
    
    str2 = str1;

    cout << str1 << endl << str2;
    return 0;
}

// Assignment operator can copy strings, vectors, and 2D vectors
// Arrays cannot be copied directly using assignment operator