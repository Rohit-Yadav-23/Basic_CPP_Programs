//                      PASSING 2D Array As an ARGUMENT in FUNCTION

//                   METHOD - 4     --> PASSING 2D ARRAY as a SINGLE POINTER

#include <iostream>
using namespace std;

void function(int r, int c, int *brr)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << *((brr + i * c) + j) << " "; // Very IMPORTANT LINE
        }
        cout << endl;
    }
}

int main()
{

    const int a = 3; 
    const int b = 4;
    
    int arr[a][b];
    cout << "Enter the elements of array : \n";

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cin >> arr[i][j];
    }

    cout << endl;
    function(a, b, (int *)arr);
    //                   👆
    //  We have to TYPECAST the 2D Array
}

// HERE, in this 2nd METHOD --> we are able to GIVE SIZE to the 2D ARRAY --> while the EXECUTION of the PROGRAM
// ie now we are able to give size to the 2D ARRAY --> in the TERMINAL WINDOW