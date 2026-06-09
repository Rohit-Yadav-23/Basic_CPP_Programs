// LEETCODE 125: VALID PALLINDROME         

// Method 2

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool isPallindrome(string s)
{
    for (int i = 0; i < s.length(); i++)
        s[i] = (char)tolower(s[i]);

    string s2;
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)s[i] >= 97 && (int)s[i] <= 122 or ((int)s[i] >= 48 && (int)s[i] <= 57))
            s2.push_back(s[i]);
    }

    int i = 0;
    while (i <= s2.size() / 2)
    {
        if (s2[i] != s2[s2.size() - i - 1])
            return false;

        i++;
    }

    return true;
}

int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);
    cout << isPallindrome(str);
}