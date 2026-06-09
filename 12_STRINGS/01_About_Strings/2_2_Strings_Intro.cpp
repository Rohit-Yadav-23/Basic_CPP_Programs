// Introduction to STRINGS (Method - 2)

#include <iostream>
using namespace std;
int main()
{
    // 1. CODE
    char arr[5] = {'1', '2', '3', '4', '5'};

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl;

    // 2.  CODE

    // char brr[5] = "12345";       // As the LAST CHARACTER (ie NULL) is NOT able to store in this array --> So, error throws

    // for(int i=0; i<5; i++)
    //  cout << brr[i] << " ";

    // 3.   CODE
    char crr[5] = "1234";

    for (int i = 0; i < 5; i++)
    {
        cout << crr[i] << " ";
    }
}