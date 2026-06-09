// Taking String as Input using "cin"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter String : ";
    cin >> str; // But, this 'cin' function only works when" NO SPACES" or "NO ENTER" or "NO TAB" is given into the string as INPUT
    cout << str;
    return 0;
}
