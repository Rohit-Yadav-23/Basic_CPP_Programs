// Predict the Output of the following code snippet:

#include <iostream>
using namespace std;

int main()
{
    // First Question
    bool p = false;
    bool q = false;
    bool r = true;

    cout << (p == q == r) << endl;
    cout << (p == (q == r)) << endl;

    // Second Question
    int a = 2;
    int b = 2;
    int c = 1;

    cout << (a == b == c);

    // Third Question
    a = 1;
    b = 2;
    c = 2;

    cout << endl << (a == b == c);

    return 0;
}