// Block Scope in C++
// Block Scope --> Variables declared inside a block { } exist only inside that block.


#include <iostream>
using namespace std;

int main()
{
    if(true)
    {
        int x = 20;

        cout << x;
    }

    // cout << x;      Error: x is not declared in this scope
    return 0;
}