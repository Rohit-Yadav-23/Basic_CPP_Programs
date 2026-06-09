// Updating the ELEMENTS of ARRAY using CALL BY REFERENCE

#include <iostream>
using namespace std;

void Passing_Array(int *brr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;
}

void Change_Element(int *crr, int length)
{
    crr[0] = 100;
    crr[4] = 200;
}

void Passing_Array_N_Printing_it_by_Pointer(int *ptr, int size)
{
    for (int i = 0; i < 6; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
}

int main()
{
    int arr[] = {23, 83, 92, 3, 1, 94};
    // Here array arr points the address of the first element

    int size = sizeof(arr) / sizeof(arr[0]);

    Passing_Array(arr, size);

    Change_Element(arr, size);

    Passing_Array_N_Printing_it_by_Pointer(arr, size);

    return 0;
}

/*
from above examples, we can conclude that 'int *brr == int brr[]'

                                          'int *crr == int crr[]'

*/