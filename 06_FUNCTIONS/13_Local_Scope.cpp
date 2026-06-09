// Local Scope                                         

//   A variable declared inside a function is called a local variable.
//   It can only be used inside that function.


#include <iostream>
using namespace std;

void show()
{
    int a = 5;

    cout << a;
}

int main()
{
    // cout << a;       Error: a is not declared in this scope
    
    show();

    return 0;
}

/*
*   variable "a" exists only inside show()
*   main() cannot access variable "a" because it's a local variable of show().
*/