//  String Array (Method - 1)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[] = {"Mr.", "Alpha", "is", "a GOOD BOY!!!!!!"};
    cout << str[0];
    cout << str[1];
    cout << str[2];
    cout << str[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}