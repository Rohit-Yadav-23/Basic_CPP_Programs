//                          PASSING 2D Array As an ARGUMENT in FUNCTION

//                       METHOD - 1 --> PASSING 2D Array With ROWS and COLUMNS

#include <iostream>
using namespace std;

void Function1(int brr[3][4])
{
    cout << "brr : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << brr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int arr[3][4];
    cout << "Enter the elements of MATRXIX arr: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];
    }

    cout << endl;
    Function1(arr);
}

// We need to PASS the DIMENSIONS of the ARRAY MANUALLY --> as the ARRAY LOOSE the INFORMATION about its DIMENSIONS due to ARRAY DECAY