// Given a string consisting of lowecase English alphabets. Print those characters that are occuring most number of times (Method 2)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    vector<int> freq(26);

    for (int i = 0; i < str.size(); i++)
    {
        int ascii = (int)str[i];
        freq[ascii - 97]++;
    }

    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < freq[i])
            max = freq[i];
    }

    for (int i = 0; i < 26; i++)
    {
        if (max == freq[i])
            cout << (char)(i + 97) << " " << max << endl;
    }
}