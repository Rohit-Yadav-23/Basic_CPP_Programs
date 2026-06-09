/* Input a string and return the number of times the neighbouring characters are different from each other
    eg. --> str = abbcdeffghh
    no. of different characters are : 5     */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);
    int n = str.length();

    int nodc = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (n == 1)
            break;

        if ((n == 2) && (str[0] != str[1]))
        {
            nodc = 1;
            break;
        }

        if (i == 0)
        {
            if (str[i] != str[i + 1])
                nodc++;
        }

        else if (i == n - 1)
        {
            if (str[i] != str[i - 1])
                nodc++;
        }

        else if ((str[i] != str[i + 1]) && str[i] != str[i - 1])
            nodc++;
    }

    cout << nodc;
}