// toupper function

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    cout << toupper('a') << endl;

    cout << (char)toupper('a') << endl;

    char str[] = "rohit yadav!!!!";
    cout << str << endl;

    for (int i = 0; i < strlen(str); i++)
        cout << (char)toupper(str[i]);
}
