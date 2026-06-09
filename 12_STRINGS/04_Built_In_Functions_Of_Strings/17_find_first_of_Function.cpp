// find_first_of function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello, World!";

    int idx = str.find_first_of("aeiou");

    if (idx < str.length())
        cout << "Vowel found at INDEX NO.: " << idx << endl;

    else
        cout << "Vowel not found" << endl;

    if (idx < str.length())
        cout << "Extracted character: " << str[idx] << endl;

    str = "Hllo, World!";
    idx = str.find_first_of("aeiou");

    if (idx < str.length())
        cout << "Vowel found at INDEX NO.: " << idx << endl;

    else
        cout << "Vowel not found" << endl;

    if (idx < str.length())
        cout << "Extracted character: " << str[idx] << endl;

    return 0;
}