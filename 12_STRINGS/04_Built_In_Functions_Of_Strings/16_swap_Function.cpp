// swap function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "To My World!";

    cout << "Before swapping: " << endl;
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl << endl;

    str1.swap(str2);    

    cout << "After swapping: " << endl;
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl << endl;


    str2.swap(str1);    

    cout << "After swapping again: " << endl;
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    return 0;
}