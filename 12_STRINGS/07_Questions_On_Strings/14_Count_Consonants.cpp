// Count the number of consonants in a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != 'a' and str[i] != 'A' and str[i] != 'e' and str[i] != 'E' and str[i] != 'i' and str[i] != 'I' and str[i] != 'o' and str[i] != 'O' and str[i] != 'u' and str[i] != 'U')
            count++;
    }

    cout << "No. of consonants are : " << count;
}