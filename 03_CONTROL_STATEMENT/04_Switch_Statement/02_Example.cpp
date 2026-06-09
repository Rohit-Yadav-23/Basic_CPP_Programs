// WAP to input a number and print the corresponding day of the week using switch statement.

#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter a number (1-3): ";
    cin >> day;

    switch (day)
    {

    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    default:
        cout << "Invalid Input";
    }

    return 0;
}