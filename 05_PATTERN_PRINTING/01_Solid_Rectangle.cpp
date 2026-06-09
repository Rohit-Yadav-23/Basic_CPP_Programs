// Print Solid Rectangle Pattern

#include <iostream>
using namespace std;

int main() 
{
    int r, c;
    cout << "Enter No. of Rows: ";
    cin >> r;

    cout << "Enter No. Of Columns : ";
    cin >> c;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++){
            cout << '*';
        }
        cout << endl;
    }
}