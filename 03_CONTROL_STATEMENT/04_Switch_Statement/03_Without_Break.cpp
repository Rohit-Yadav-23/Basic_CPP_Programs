// WAP to input a number and print the corresponding day of the week using switch statement without using break statement.

#include <iostream>
using namespace std;

int main()
{
    int x = 1;

    switch (x)
    {

    case 1:
        cout << "One ";

    case 2:
        cout << "Two ";

    case 3:
        cout << "Three ";
    }

    return 0;
}

// // Without `break`, execution continues into the next cases.