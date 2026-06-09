// Parameters vs Arguments in C++

#include <iostream>
using namespace std;

void add(int a, int b)       // Here, 'a' and 'b' are called "Parameters".
{
    cout << a + b;
}

int main()
{
    add(5, 3);       // Here, '5' and '3' are called "Arguments".

    return 0;
}

/*
- `5` and `3` are ACTUAL ARGUMENTS
- They are the real values sent to the function

-  Note: The terms "parameters" and "arguments" are often used interchangeably, but technically:
- Parameters are the variables defined in the function declaration/definition that receive values when the function is called.
- Arguments are the actual values passed to the function when it is called. The arguments are assigned to the corresponding parameters in the function definition when the function is invoked.
*/