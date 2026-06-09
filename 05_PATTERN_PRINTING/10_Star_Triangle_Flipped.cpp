// Print Star Triangle Flipped

#include <iostream>
using namespace std;

int main() 
{
    int r;
    cout << "Enter No. of Rows: ";
    cin >> r;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            if(j <= r - i){
                cout << " ";
            }

            else{
                cout << "*";
            }
        }
        cout << endl;
    }
}