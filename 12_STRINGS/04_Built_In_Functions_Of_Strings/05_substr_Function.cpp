// substr function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "abcdef";
    cout << str << endl;
    cout << str.substr(4) << endl;

    cout << str.substr(3) << endl;
    cout << str.substr(2) << endl;
    cout << str.substr(1) << endl;
    cout << str.substr(0) << endl;

    cout << "This PRINTS an EMPTY STRING : " << str.substr(str.size()) << endl
         << endl;

    cout << str.substr(2, 3) << endl;

    cout << str.substr(2, 2) << endl;

    cout << str.substr(0, 0) << endl;

    cout << str.substr(0, 1) << endl;

    cout << str.substr(1, 1) << endl;

    cout << str.substr(1, 3) << endl;

    cout << str.substr(5, 0) << endl;

    cout << str.substr(5, 1);
}
