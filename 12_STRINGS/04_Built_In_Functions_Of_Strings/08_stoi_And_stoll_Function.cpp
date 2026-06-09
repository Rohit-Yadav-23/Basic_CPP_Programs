// stoi and stoll functions

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "123456";
    int m = stoi(str1);
    cout << m << endl;

    cout << m + 2 << endl;

    string str2 = "123456789101112131";
    long long n = stoll(str2);
    cout << n << endl;

    string str3 = "0000001234567";
    long long n2 = stoll(str3);
    cout << n2 << endl; 
}