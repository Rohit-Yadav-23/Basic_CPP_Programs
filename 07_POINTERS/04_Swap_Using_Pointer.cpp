//                                  Swapping two numbers using pointers                                               

#include <iostream>
using namespace std;

void swap_x_y(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5;
    int y = 8;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap_x_y(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y;
}



/*
//  Difference Between Pass by Value and Pass by Reference

| Pass by Value            | Pass by Reference           |
| ------------------------ | --------------------------- |
| Copy is passed           | Original variable is passed |
| Original value unchanged | Original value changes      |
| Extra memory used        | No extra copy               |
| Safer                    | Faster                      |

*/