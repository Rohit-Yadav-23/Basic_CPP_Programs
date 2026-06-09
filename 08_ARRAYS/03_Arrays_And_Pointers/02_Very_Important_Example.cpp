// Updating the ELEMENTS of ARRAY using CALL BY REFERENCE

/*This the explaination of the example 02_Updat_Array_Use_Pass_By_Reference.cpp which I studied earlier */

#include <iostream>
using namespace std;

void Passing_Array(int brr[], int length)

/*Here, the Parameter 'int brr[]' is a "pointer", that points the address of the first element of the 'array arr'
==> Which means that the pointer brr[] has the ACCESS OF THE ENTIRE ELEMENTS of the array arr      */

{
    for (int i = 0; i < length; i++)
    {
        cout << brr[i] << " "; // That means brr[] is a "POINTER AND ARRAY BOTH"
    }

    cout << endl;
}

void Change_Element(int crr[], int length)

// AGAIN, here the Parameter 'int crr[]' which is POINTER, now starts pointing to the address of the first element of array arr
// ==> Which again means that, the pointer crr[] has the CAPABILITY TO ACCESS THE ENTIRE ELEMENTS of the array arr
// Hence, we can "modify" the elements of the array arr by the "HELP OF THE POINTER crr"
{
    crr[0] = 100;
    crr[4] = 200;
}

int main()
{
    int arr[] = {23, 83, 92, 3, 1, 94};
    // here, array arr is pointing the address of the first element

    int size = sizeof(arr) / sizeof(arr[0]);

    Passing_Array(arr, size);
    //            ⬆️
    // Passing the address of the first element of array arr ==> So that POINTER brr[] can receives the address of the first element and it starts pointing on the address of the first element of array arr

    Change_Element(arr, size);
    //             ⬆️
    // Passing the address of the first element of array arr ==> So that POINTER crr[] can receives the address of the first element and it starts pointing on the address of the first element of array arr

    Passing_Array(arr, size);
    //            ⬆️
    // Passing the address of the first element of array arr ==> So that POINTER brr[] can receives the address of the first element and it starts pointing on the address of the first element of array arr

    return 0;
}