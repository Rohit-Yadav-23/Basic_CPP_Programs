//                                   PASSING 2D Array As an ARGUMENT in FUNCTION

//                          METHOD - 3 --> PASSING 2D Array with Rows and Columns DECALRED GLOBALLY

#include <iostream>
using namespace std;

const int r = 3; // ROW SIZE and COLUMN SIZE are GOLBALLY DECLARED with CONSTANT TYPE INTGER --> So, that SIZE of both
const int c = 4; // ROW and COLUMN can not be CHANGED THROUGHOUT the PROGRAM

// IF const KEYWORD is not used --> ERROR will be shown by the COMPIILER

void Function1(int brr[r][c]) // METHOD - 3(A)
{
    cout << "brr : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << brr[i][j] << " ";
        cout << endl;
    }
}

void Function2(int crr[][c]) // METHOD - 3(B)    PASSING 2D Array with ONLY NO. of COLUMNS
{
    cout << "crr : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << crr[i][j] << " ";
        cout << endl;
        ;
    }
}

int main()
{
    int arr[r][c];
    cout << "Enter the elements of MATRXIX arr: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    }

    cout << endl;
    Function1(arr);

    cout << endl;
    Function2(arr);
    cout << endl;
}

// BUT in this METHOD, we are unable to give desired size of the 2d ARRAY, while execution of the PROGRAM (in the TERMINAL WINDOW)
// SO, PROCEED to the next 4th METHOD