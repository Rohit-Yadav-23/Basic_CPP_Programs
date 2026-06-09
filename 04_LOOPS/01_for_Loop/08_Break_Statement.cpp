// WAP to print numbers from 1 to 10 but when the number is 6 then break the loop.


#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 6)
        {
            break;
        }

        cout << i << endl;
    }

    cout << "Loop ended";

    return 0;
}