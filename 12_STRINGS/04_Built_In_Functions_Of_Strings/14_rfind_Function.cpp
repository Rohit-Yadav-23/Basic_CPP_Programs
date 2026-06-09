// rfind function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "H World!";

    int idx = str.rfind("World");

    if (idx >= 0)
        cout << "Substring found at INDEX NO.: " << idx << endl;

    else
        cout << "Substring not found" << endl;

    if (idx >= 0)
        cout << "Extracted substring: " << str.substr(idx, 5) << endl << endl;

    str = "Rohit, Yadav Yadav!";
    idx = str.rfind("Yadav");

    if (idx >= 0)
        cout << "Substring found at INDEX NO.: " << idx << endl;

    else
        cout << "Substring not found" << endl;

    if (idx >= 0)
        cout << "Extracted substring: " << str.substr(idx, 5) << endl;

    return 0;
}