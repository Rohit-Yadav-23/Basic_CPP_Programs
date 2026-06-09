// isdigit function

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch = '5';

    if (isdigit(ch))
    {
        cout << "The character is a digit." << endl;
    }

    else
    {
        cout << "The character is not a digit." << endl;
    }

    string str = "Hello123";

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            count++;
        }
    }

    cout << "Total no. of digits in the string: " << count << endl;

    return 0;
}