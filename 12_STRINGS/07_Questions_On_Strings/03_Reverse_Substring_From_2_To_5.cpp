// Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string whose length is greater than 5 : ";
    getline(cin, str);
    reverse(str.begin() + 1, str.begin() + 5);

    cout << str;
    return 0;
}