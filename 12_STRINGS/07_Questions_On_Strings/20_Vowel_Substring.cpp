// Input a String and return the number of substrings that contains only vowels

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);              // Take input of this string = "aedbciotuuee"  --> answer is 16

    int count = 0, ans = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u')
            count++;

        else
        {   
            ans += (count*(count + 1))/2;
            count = 0;
        }
    }

    ans += (count*(count + 1))/2;
    cout << ans;
}