// PASSING 2D ARRAY as an ARGUMENT and PARAMETER

#include <iostream>
using namespace std;

void change(int brr[2][3]) // "COLUMN" ki "SIZE" ko "DENA" "COMPULSORY" hai
{
    brr[0][0] = 80;
    brr[0][2] = 90; // 2D Array also works only on "CALL BY REFERENCE"

    return;
}

int main()
{
    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << endl;
    change(arr); // Row and Column ki size ko yaha pe nahi de sakate hai --> B/C "arr" means "BASE ADDRESS"
                 // aND HERE, I am PASSING the BASE ADDRESS

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

// In 2D Array, its compulsory to pass the "COLUMN SIZE" at the time of passing 2D Array as an argument in any function, otherwise it will generate an error. B/C when we pass a 2D Array as an argument, we are actually passing the base address of the array, and the function needs to know how many columns there are in order to correctly access the elements of the array.