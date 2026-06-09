// Petya and Strings - CodeForces

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int cnt1 = 0, cnt2 = 0;

    int i=0;

    while(i < str1.size())
    {
        if(tolower(str1[i]) == tolower(str2[i]))
        {
            i++;
            continue;
        }

        else if(tolower(str1[i]) < tolower(str2[i]))
        {
            cout << -1;
            break;
        }

        else if(tolower(str1[i]) > tolower(str2[i]))
        {
            cout << 1;
            break;
        }

    }

    if(i == str1.size())
        cout << 0;
}