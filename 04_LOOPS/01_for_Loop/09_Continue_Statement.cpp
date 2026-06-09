// WAP to print numbers from 1 to 10 but when the number is 4, 6 and 8 then skip that number and continue with the next number.

#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 4 || i == 6 || i == 8)
        {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}