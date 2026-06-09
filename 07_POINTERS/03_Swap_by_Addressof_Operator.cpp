//                Swapping two numbers using the addressof operator (&)

#include <iostream>
using namespace std;

void swap_x_y(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5;
    int y = 8;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap_x_y(x, y);
    cout << "After swap: x = " << x << ", y = " << y;

    return 0;
}