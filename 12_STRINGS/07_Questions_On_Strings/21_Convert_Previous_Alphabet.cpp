//        CONVERT A STRING INTO A STRING WHERE EACH CHARACTER IS REPLACED BY ITS PREVIOUS ALPHABET

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a')
            str[i] = 'z';

        else if (str[i] == 'A')
            str[i] = 'Z';
            
        else
            str[i] = str[i] - 1;
    }

    cout << str;
}