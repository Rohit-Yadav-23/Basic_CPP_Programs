// Character Array

#include <iostream>
using namespace std;

int main()
{
    char str1 = 'a';
    cout << str1 << endl;

    char str2[5] = {'a', 'b', 'c', 'd','\0'};        // str2[5] is a CHARACTER ARRAY which is TERMINATED by NULL
    cout << str2;                                    // So, str[5] is now becomes a STRING VARIABLE

    char str3[5] = {'e', 'f', 'g', 'h'}; 
    cout << endl << str3;

    char str4[6] = "Rohit";
    cout << endl << str4;

    return 0;
}