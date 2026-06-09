// Find the second largest digit in the string consisting of digits from '0' to '9'

// Method 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a numeric string : ";
    cin >> str;

    int Max = INT_MIN;
    for (int i = 0; i < str.size(); i++)
    {
        if (Max < (str[i] - '0'))
            Max = (str[i] - '0');
    }

    int SecMax = INT_MIN;
    for (int i = 0; i < str.size(); i++)
    {
        if ((SecMax < (str[i] - '0')) && ((str[i] - '0') != Max))
            SecMax = (str[i] - '0');
    }
    cout << "Second Largest Digit in Numeric String is : " << SecMax;
}