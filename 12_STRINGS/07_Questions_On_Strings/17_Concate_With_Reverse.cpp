// Concatinate string with its REVERSE PART

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    cout << "Enter String : ";
    getline(cin, str1);

    string str2 = str1;
    reverse(str1.begin(), str1.end());

    str2 = str2 + str1;
    cout << str2;
    return 0;
}