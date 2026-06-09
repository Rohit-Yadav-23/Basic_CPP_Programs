// Function with Argument and Return Type

#include <iostream>
using namespace std;

int sum(int a, int b) // int sum(4, 5) ==> This is Wrong ==> This will give error
{
    return a + b;
}

int main()
{
    cout << sum(4, 5);
}