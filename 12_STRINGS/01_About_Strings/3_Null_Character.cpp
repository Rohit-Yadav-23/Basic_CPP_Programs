// NULL Character

#include <iostream>
using namespace std;

int main()
{   
    cout << '\0' << endl;       // Nothing will be shown on the terminal

    // The ASCII VALUE of NULL CHARACTER is '0'
    cout << (int)'\0';

    // cout << '\';         --> This gives ERROR --> Because we can't print a single BACKSLASH  ---> B/C BACKSLASH is a SPECIAL CHARACTER
}