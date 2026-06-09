// Assigning One String into Another String in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Rohit Yadav";
    string str2;

    for (int i = 0; i < str1.size(); i++)
        cout << str1[i] << " ";

    for (int i = 0; i < str1.size(); i++)
    {
        // str2[i] = str1[i];       --> We can't do this    --> b/c we have NOT GIVEN SIZE to the string str1 at the DECLARATION TIME
        str2.push_back(str1[i]);
    }
    cout << endl << str2 << endl;



    string str3[str1.size()];               // This is an ARRAY of STRINGS
    for (int i = 0; i < str1.size(); i++)
    {
        str3[i] = str1[i]; 

        // str2.push_back(str1[i]);         --> This will GIVE ERROR
    }
    cout << endl << str3 << endl; // This will PRINT the ADDRESS of the FIRST ELEMENT of STRING str3

}