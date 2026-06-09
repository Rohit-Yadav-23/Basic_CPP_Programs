// Print Plus Pattern

#include <iostream>
using namespace std;

int main() 
{
    int r, c;
    cout << "Enter No. of Odd Rows: ";
    cin >> r;

    cout << "Star Plus Pattern" << endl;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            if((i == (r/2 + 1)) || (j == (r/2 + 1))){
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