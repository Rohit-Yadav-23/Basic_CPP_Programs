//  Print Solid Right Angled Triangle With Numbers

#include <iostream>
using namespace std;

int main() 
{
    int r;
    cout << "Enter No. of Rows: ";
    cin >> r;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }

    cout << "Odd Numbers in Each Row" << endl;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; j++){
            cout << 2*j-1;
        }
        cout << endl;
    }
}