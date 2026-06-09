// isalnum and isspace functions

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch = '5';

    if (isalnum(ch))
    {
        cout << "The character is an alphanumeric character." << endl;
    }

    else
    {
        cout << "The character is not an alphanumeric character." << endl;
    }

    if (isspace(ch))
    {
        cout << "The character is a whitespace character." << endl;
    }

    else
    {
        cout << "The character is not a whitespace character." << endl;
    }

    string str = "Hello123  ";

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalnum(str[i]))
        {
            count++;
        }
    }

    cout << "Total no. of alphanumeric characters in the string: " << count << endl;

    count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isspace(str[i]))
        {
            count++;
        }
    }

    cout << "Total no. of whitespace characters in the string: " << count << endl;

    return 0;
}