//      Convert String into a String where each character is replaced by its next alphabet

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
        if (str[i] == 'z')
            str[i] = 'a';

        else if (str[i] == 'Z')
            str[i] = 'A';

        else
            str[i] = str[i] + 1;
    }

    cout << str;
}