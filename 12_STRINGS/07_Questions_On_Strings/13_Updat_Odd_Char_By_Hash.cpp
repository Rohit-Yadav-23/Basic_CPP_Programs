// Upadate all the odd positions characters of a string with hashtag '#'

#include <bits/stdc++.h> 
using namespace std;

int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 != 0)
            str[i] = '#';
    }

    cout << str;
}