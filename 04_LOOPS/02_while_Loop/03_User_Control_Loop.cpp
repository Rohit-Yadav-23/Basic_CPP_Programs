// WAP to print "Loop is running" and ask user "Continue? (y/n): " and if user enters 'y' then repeat the loop otherwise exit the loop.

#include <iostream>
using namespace std;

int main()
{

    char choice = 'y';

    while (choice == 'y')
    {

        cout << "Loop is running\n";

        cout << "Continue? (y/n): ";
        cin >> choice;
    }

    return 0;
}