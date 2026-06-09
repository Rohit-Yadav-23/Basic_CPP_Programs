// isupper function

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch = 'A';

    if (isupper(ch))
    {
        cout << "The character is an uppercase alphabet." << endl;
    }

    else
    {
        cout << "The character is not an uppercase alphabet." << endl;
    }

    string str = "Rohit Yadav IS the BEST";

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            count++;
        }
    }

    cout << "Total no. of uppercase alphabets in the string: " << count << endl;

    return 0;
}