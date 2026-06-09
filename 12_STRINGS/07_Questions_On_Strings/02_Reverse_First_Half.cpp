// Input a String of even length and reverse the First Half of the String

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a even length String : ";
    getline(cin, str);
    int size = str.length();
    reverse(str.begin(), str.begin() + (size) / 2);
    cout << str;
}