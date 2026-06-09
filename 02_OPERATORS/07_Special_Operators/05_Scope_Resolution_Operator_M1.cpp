//               SCOPE RESOLUTION OPERATOR --> "::"

//       Method 1: Using the scope resolution operator to access a global variable when there is a local variable with the same name.

#include <iostream>
using namespace std;

int x = 100;

int main()
{
    int x = 5;
    cout << x << endl;
    cout << ::x << endl;
}