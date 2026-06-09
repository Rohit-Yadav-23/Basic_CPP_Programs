// WAP to create a basic calculator using switch statement.

#include <iostream>
using namespace std;

int main()
{
    char op;
    int a, b;

    cout << "Enter operator (+,-,*,/): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (op)
    {

    case '+':
        cout << "Result = " << a + b;
        break;

    case '-':
        cout << "Result = " << a - b;
        break;

    case '*':
        cout << "Result = " << a * b;
        break;

    case '/':
        cout << "Result = " << a / (float)b;
        break;

    default:
        cout << "Invalid Operator";
    }

    return 0;
}