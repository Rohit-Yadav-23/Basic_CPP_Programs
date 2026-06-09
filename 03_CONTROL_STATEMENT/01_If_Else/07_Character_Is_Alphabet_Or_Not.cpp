//  WAP to check whether a character is alphabet or not and also Prints its ASCII VALUE                 

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        cout << "ch is an ALPHABET\n" << "ASCII VALUE is : " << (int)ch;

    else
        cout << "ch is not an ALPHABET\n"<< "ASCII VALUE is : " << (int)ch;

    return 0;
}