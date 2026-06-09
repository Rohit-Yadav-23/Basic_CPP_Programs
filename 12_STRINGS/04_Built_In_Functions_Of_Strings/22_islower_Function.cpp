// islower function

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch = 'a';

    if (islower(ch))
    {
        cout << "The character is a lowercase alphabet." << endl;
    }

    else
    {
        cout << "The character is not a lowercase alphabet." << endl;
    }

    string str = "Rohit Yadav IS the BEST";

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i]))
        {
            count++;
        }
    }

    cout << "Total no. of lowercase alphabets in the string: " << count << endl;

    return 0;
}