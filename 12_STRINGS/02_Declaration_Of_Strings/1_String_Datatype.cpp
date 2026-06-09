// Declaration of STRINGS by using STRING DATATYPE

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Rohit";
    cout << str << endl;

    for (int i = 0; str[i] != '\0'; i++)
        cout << str[i];
    
    return 0;
}
