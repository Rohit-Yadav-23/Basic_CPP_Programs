// WAP to check whether a character is vowel or consonant using nested if else statement.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            cout << "Character is a vowel!";

        else
            cout << "Character is a consonant";
    }

    else
        cout << "Character is not an Alphabet";
}