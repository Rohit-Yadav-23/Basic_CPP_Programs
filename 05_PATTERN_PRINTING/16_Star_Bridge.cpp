// Print Star Bridge

#include <iostream>
using namespace std;

int main() 
{
    int r;
    cout << "Enter No. of Rows: ";
    cin >> r;

    for(int i = 1; i <= 2*r-1; i++){
        cout << '*';
    }

    cout << endl;

    for(int i = 2; i <= r; i++)
    {
        for(int j = 1; j <= r-i+1; j++){
            cout << '*';
        }

        for(int j = 1; j <= 2*(i - 1)-1; j++){
            cout << ' ';
        }

        for(int j = 1; j <= r-i+1; j++){
            cout << '*';
        }
        
        cout << endl;
    }
}