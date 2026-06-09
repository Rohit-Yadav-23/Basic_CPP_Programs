// to_string Function

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 123456;
    string str1 = to_string(x);
    cout << str1 << endl;

    string str2 = to_string(789101112);
    cout << str2;

    return 0;
}