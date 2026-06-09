// Count the no. of vowels in a STRING which is input by the user

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int vowel = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        vowel++;
    }

    cout << vowel;
    return 0;
}