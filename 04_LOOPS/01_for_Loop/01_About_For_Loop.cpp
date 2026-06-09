// WAP to print "I Love Myself" 10 times and "I Respect Myself" 5 times using for loop.

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "I Love Myself" << endl;
    }

    /*
        int i = 1;
        for( i<=5 )
        {
            cout << "I Respect Myself" << endl;                 ==> This is wrong
            i++;
        }
    */

    int i = 1;
    
    for ( ;i<=5; )
    {
        cout << "I Respect Myself" << endl;             // This is Right
        i++;
    }

    return 0;
}