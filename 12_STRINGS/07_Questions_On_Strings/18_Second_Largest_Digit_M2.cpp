// Find the second largest digit in the string consisting of digits from '0' to '9'

// Method 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a numeric string : ";
    cin >> str;

    char Max = '!';
    for (int i = 0; i < str.size(); i++)
    {
        if (Max < str[i])
            Max = str[i];
    }

    char SecMax = '!';
    for (int i = 0; i < str.size(); i++)
    {
        if (SecMax < str[i] && (str[i] != Max))
            SecMax = str[i];
    }
    cout << "Second Largest Digit : " << SecMax;
}
