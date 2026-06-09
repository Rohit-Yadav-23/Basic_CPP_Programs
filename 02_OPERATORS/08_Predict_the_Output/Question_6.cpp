// Take float input and print the fractional part of the real number                        

#include <iostream>
using namespace std;

int main()
{
    float x;
    cout << "Enter the floating value of x : ";
    cin >> x;

    cout << x - (int)x;

    return 0;
}