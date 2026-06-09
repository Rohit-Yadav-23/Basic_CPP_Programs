// Calculate Size of Array in ANOTHER FUNCTION ---> RIGHT METHOD

/* RIGHT METHOD MEANS -----> PASSING the SIZE of ARRAY at the TIME OF PASSING the ARRAY AS AN ARGUMENT from MAIN FUNCTION to any OTHER FUNCTION */

#include <iostream>
using namespace std;

void Passing_Array(int brr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;
}

void Change_Element(int crr[], int length)
{
    crr[0] = 100;
    crr[4] = 200;
}

int main()
{
    int arr[] = {23, 83, 92, 3, 1, 94};
    int size = sizeof(arr) / sizeof(arr[0]);

    Passing_Array(arr, size);
    //                 ⬆️
    // PASSING SIZE or the LENGTH of ARRAY becomes COMPULSORY for us --> When PASSING ARRAY as an ARGUMENT in the function
    // Because we cannot calculate the size of brr[] (because it is a pointer) inside the 'Passing_Array function'

    Change_Element(arr, size);
    //                   ⬆️
    // Passing size or the length of ARRAY becomes compulsory for us --> When Passing array as an argument in the function
    // B/c we are unable to find the size of 'pointer crr[]' inside the Change_Element function

    Passing_Array(arr, 6);
    
    return 0;
}