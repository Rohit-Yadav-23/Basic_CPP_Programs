// LEETCODE 125: VALID PALLINDROME

// Method 1

#include <bits/stdc++.h>
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

    string s3 = s2;
    reverse(s3.begin(), s3.end());

    if (s2 == s3)
        return true;

    else
        return false;
}

int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);
    cout << isPallindrome(str);
}