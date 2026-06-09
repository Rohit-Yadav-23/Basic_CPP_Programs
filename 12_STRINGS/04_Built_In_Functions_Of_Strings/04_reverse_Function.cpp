// reverse function

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Rohit Yadav";
    cout << str << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;

    string str1 = "ROHITY";
    cout << endl << str1 << endl;
    reverse(str1.begin()+2, str1.end());      // We can REVERSE the SPECIFIC PART of STRING also
    cout << str1 << endl;

    string str2 = "ROHITY";
    cout << endl << str2 << endl;
    reverse(str2.begin()+2, str2.end()-1);
    cout << str2 << endl;

    string str3 = "ABCDEF";

    cout << endl  << str3 << endl;
    reverse(str3.begin()+2, str3.begin() + 5);

    cout << str3;
}