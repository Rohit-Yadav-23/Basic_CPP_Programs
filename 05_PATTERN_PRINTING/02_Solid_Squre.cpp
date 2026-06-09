// Print Solid Square Pattern

#include <iostream>
using namespace std;

int main() 
{
    int s;
    cout << "Enter No. of Rows ";
    cin >> s;

    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < s; j++){
            cout << '*';
        }
        cout << endl;
    }
}