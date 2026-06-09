// isalpha function

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch = 'a';

    if (isalpha(ch))
    {
        cout << "The character is an alphabetic character." << endl;
    }

    else
    {
        cout << "The character is not an alphabetic character." << endl;
    }

    string str = "Rohit Yadav 12 345";

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            count++;
        }
    }

    cout << "Total no. of alphabetic characters in the string: " << count << endl;

    return 0;
}