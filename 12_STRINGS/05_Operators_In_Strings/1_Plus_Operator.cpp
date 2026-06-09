// Plus operator in strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Rohit";
    string str2 = " Yadav";

    cout << str1 << endl;

    str1 = str1 + str2;         
    cout << str1 << endl;

    str1 = str1 + ' ';          
    str1 = str1 + "Is the Best !!!!";
    cout << str1 << endl;

    str1 = " " + str1;       
    cout << str1 << endl;

    str1 = "Mr." + str1;       
    cout << str1 << endl;

    str1 = "!!!! " + str1;
    cout << endl << str1 << endl;

    // str1 = str1 + 123;   --> ERROR: number cannot be added directly to string

    str1 = str1 + "1234";
    cout << endl << str1;

    str1 = str1 + ' ' + "5678" +  "9 10 11 12";
    cout << endl << str1;

    // str1 = ' ' + "5678" + "9 10 11 12" + str1; --> ERROR
}