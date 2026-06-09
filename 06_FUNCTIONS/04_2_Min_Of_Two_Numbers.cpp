// Find the Minimum of Two Numbers using Function

#include <iostream>
using namespace std;

int Minimum(int a, int b)
{
    if (a > b)
        return a;

    else
        return b;
}

int main()
{
    int x, y;
    
    cout << "Enter the values of x and y : ";
    cin >> x >> y;

    cout << Minimum(x, y);
}