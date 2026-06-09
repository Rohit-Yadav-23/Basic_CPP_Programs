//                                   PASSING 2D Array As an ARGUMENT in FUNCTION

//                          METHOD - 2 --> PASSING 2D Array with ONLY NO. of COLUMNS

#include <iostream>
using namespace std;

void Function(int crr[][4], int r)
{
    cout << "crr : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << crr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    const int a = 3; // Taking size of row --> 3

    int arr[a][4]; // Taking size of column --> 4
    cout << "Enter the elements of MATRXIX arr: \n";

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];
    }

    cout << endl;
    Function(arr, a);
    cout << endl;
}

// We always need to mention the size of the column as it is mandatory for a 2D array because in C++, when a 2D array of n rows and m columns is declared, then in the memory a 1D array of size n x m is created