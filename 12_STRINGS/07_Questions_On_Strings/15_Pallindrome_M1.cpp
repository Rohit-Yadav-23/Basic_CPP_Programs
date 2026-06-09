// Check whether the string is a Pallindrome or Not and also, Don't use Another variable (j)

// Method 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);

    bool flag = true;
    int i = 0;
    while (i <= str.size() / 2)
    {
        if (str[i] != str[str.size() - i - 1])
        {
            flag = false;
            break;
        }
        i++;
    }

    if (flag == true)
        cout << "Pallindrome !!!!";

    else
        cout << "Not Pallindrome !!!!";
}