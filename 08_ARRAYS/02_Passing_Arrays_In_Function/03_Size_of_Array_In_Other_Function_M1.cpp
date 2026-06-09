// Calculate Size of Array in ANOTHER FUNCTION ----> WRONG METHOD

#include <iostream>
using namespace std;

void Passing_Array(int brr[])
{
    int size = sizeof(brr) / sizeof(brr[0]); // ---> This GENERATES WARNING  ---> Because here, brr is a "POINTER" that points the ADDRESS of the first element of arr
                                             // So, compilar is unable to find the size of brr. Pointer brr can update the elements of the array arr (as I studied in Previous Code)
                                             // But, pointer brr cannot calculate the size of array arr
                                             // So, it becomes compulsory for us, to pass the size of array also --> at the time of passing array AS AN ARGUMENT to any other function

    for (int i = 0; i < size; i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;
}

void Change_Element(int crr[])
{
    crr[0] = 100;
    crr[4] = 200;
}

int main()
{
    int arr[] = {23, 83, 92, 3, 1, 94};

    Passing_Array(arr);

    Change_Element(arr);

    Passing_Array(arr);

    return 0;
}