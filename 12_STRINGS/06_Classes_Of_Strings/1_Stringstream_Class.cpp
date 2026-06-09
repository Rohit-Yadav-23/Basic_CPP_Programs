#include <iostream>
#include <string>
#include <sstream>      
using namespace std;

int main()
{
    string str = "Mr. Alpha         is a    good boy. And an INTELLIGENT BOY....";
    stringstream ss(str);

    string temp;

    while(ss >> temp)
    {
        cout << temp << endl;
    }

    return 0;
}