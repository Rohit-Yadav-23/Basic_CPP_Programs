// find function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "H World!";

    int idx = str.find("World");

    if (idx < str.length())
        cout << "Substring found at INDEX NO. : " << idx << endl;

    else
        cout << "Substring not found" << endl;

    if (idx < str.length())
        cout << "Extracted substring: " << str.substr(idx, 5) << endl;



    str = "Hello, World! Welcome to the world of C++ programming.";

    size_t pos = str.find("World");

    if (pos != string::npos)
        cout << "Substring 'World' found at position: " << pos << endl;

    else
        cout << "Substring 'World' not found" << endl;



    pos = str.find("world");

    if (pos != string::npos)
        cout << "Substring 'world' found at position: " << pos << endl;

    else
        cout << "Substring 'world' not found" << endl;



    pos = str.find('o');

    if (pos != string::npos)
        cout << "Character 'o' found at position: " << pos << endl;
    else
        cout << "Character 'o' not found" << endl;



    pos = str.find("C++");

    if (pos != string::npos)
        cout << "Substring 'C++' found at position: " << pos << endl;
    else
        cout << "Substring 'C++' not found" << endl;

    return 0;
}