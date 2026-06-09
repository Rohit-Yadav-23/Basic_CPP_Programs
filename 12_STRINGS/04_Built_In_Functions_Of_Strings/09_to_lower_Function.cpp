// tolower function

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    cout << tolower('A') << endl;

    cout << (char)tolower('A') << endl;

    string str = "ROHIT YADAV!!!!";
    cout << str << endl;

    for (int i = 0; str[i] != '\0'; i++)
        cout << (char)tolower(str[i]);
}
