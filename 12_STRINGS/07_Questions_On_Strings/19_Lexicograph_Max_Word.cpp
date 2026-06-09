/*
Given a sentence 'str', return the word that is LEXICOGRAPHICALLY MAXIMUM

Lexicographical order means: Dictionary order (alphabetical order)

Example: apple ball cat dog zebra

This is lexicographical increasing order.

So the lexicographically maximum word is: zebra --> because it comes last alphabetically.
*/

#include <bits/stdc++.h>
using namespace std;

string Lexographical(string str)
{
    stringstream ss(str);

    string temp;
    string ans = "";

    while (ss >> temp)
    {
        if (temp > ans)
            ans = temp;
    }

    return ans;
}

int main()
{
    string str;

    cout << "Enter string : ";

    getline(cin, str);

    cout << Lexographical(str);

    return 0;
}