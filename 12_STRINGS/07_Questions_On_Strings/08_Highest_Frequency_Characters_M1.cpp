//  Given a string consisting of lowecase English alphabets. Print those characters that are occuring most number of times (Method 1)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int max = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
                count++;
        }

        if (max < count)
        {
            max = count;
        }
    }

    cout << "Maximum no. of Repition is :  " << max << endl;

    for (int i = 0; i < str.length(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
                count++;
        }

        if (max == count)
            cout << str[i] << " " << max << endl;
    }
}