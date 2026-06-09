// Equal To Operator (==)

#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    cout << (x = 7) << endl;
    cout << (x == 7);

    // cout << x = 7;  -->  Error --> Without parentheses, gives error.
    // cout << x == 7; -->  Error
    return 0;
}