// Print Inverted Right Angled Triangle

#include <iostream>
using namespace std;

int main() 
{
    int s;
    cout << "Enter No. of Rows ";
    cin >> s;

    for(int i = 1; i <= s; i++)
    {
        for(int j = s; j >= i; j--){
            cout << '*';
        }
        cout << endl;
    }
}