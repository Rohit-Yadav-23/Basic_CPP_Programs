// erase function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello, World!";

    str.erase(2, 7);

    cout << str << endl;

    str = "Hello, World!";

    str.erase(str.length() - 7, 7);

    cout << str << endl;

    str = "Hello, World! Welcome to the world of C++ programming.";
    string substring = "World";

    size_t pos = str.find(substring);

    if (pos != string::npos)
    {

        str.erase(pos, substring.length());
        cout << "String after erasing substring '" << substring << "': " << str << endl;
    }

    else
    {
        cout << "Substring '" << substring << "' not found in the string." << endl;
    }
    return 0;
}