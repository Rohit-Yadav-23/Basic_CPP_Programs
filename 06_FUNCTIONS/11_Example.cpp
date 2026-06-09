// Parameters vs Arguments in C++

#include <iostream>
using namespace std;

void greet(string name)      //  Here, 'name' is called "Parameter". It's a variable that receives the value when the function is called.
{
    cout << "Hello " << name;
}

int main()
{
    greet("Mr. Alpha");      // Here, "Mr. Alpha" is called "Argument". It's the actual value sent to the function.

    return 0;
}

// Formal Parameter : "name"
// Actual Argument : "Mr. Alpha"