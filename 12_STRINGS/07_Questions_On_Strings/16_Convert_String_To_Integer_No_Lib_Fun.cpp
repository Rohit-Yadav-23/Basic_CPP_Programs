// Convert a string to Intger Without Using Built In Function

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a numeric string : ";
    cin >> str;

    int num = 0, sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        sum = sum * 10;
        num = (str[i] - '0');
        sum = sum + num;
    }

    cout << sum;
}
