// Print Cross Pattern

#include <iostream>
using namespace std;

int main() 
{
    int r, c;
    cout << "Enter No. of Odd Rows: ";
    cin >> r;

    cout << "Star Cross Pattern" << endl;
    
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            if(i == j){
                cout << "*";
            }

            else if(i + j - 1 == r){
                cout << "*";
            }

            else{
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}