// Check whether the string is a Pallindrome or Not and also, Don't use Another variable (j)

// Method 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    cout << "Enter string : ";
    getline(cin, str1);

    string str2 = str1;

    reverse(str1.begin(), str1.end());

    bool flag = true;

    if(str1 == str2)
    cout << "Pallindrome !!";

    else
    cout << "Not Pallindrome !!";
}