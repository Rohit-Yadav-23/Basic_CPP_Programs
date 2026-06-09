// Way Too Long Words - CodeForces

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;   // Number of test cases
    cin >> t;
    
    while(t--)
    {
        string s;   // String to store the input string
        cin >> s;
        
        if(s.length() > 10)   // If the length of the string is greater than 10
            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;   // Print the first character, the number of characters in between, and the last character
        else
            cout << s << endl;   // Otherwise, print the string as it is
    }
    
    return 0;
}