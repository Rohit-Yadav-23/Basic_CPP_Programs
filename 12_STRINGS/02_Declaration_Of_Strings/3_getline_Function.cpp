// Taking strings as an input using "getline" function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter String : ";
    
    getline(cin, str);      /* getline function can take SPACES, ENTER & TABS as INPUT*/

    cout << str;
    return 0;
}
