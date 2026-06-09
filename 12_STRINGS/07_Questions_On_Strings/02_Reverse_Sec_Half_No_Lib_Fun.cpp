// Reverse the second half of the string without using the Library function and an extra Variable (j)

#include <bits/stdc++.h>
using namespace std;

void Reverse(string s, int begin, int end)
{
    for (int i = begin; i < (begin + end) / 2; i++)
    {
        swap(s[i], s[end + begin - 1 - i]);
    }

    cout << s;
}

int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;
    
    Reverse(str, str.size() / 2, str.size());
}