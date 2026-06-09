// C++ Program to demonstrate "Passing Array in Function" (Method-1)

#include <iostream>
using namespace std;

void Passing_Array(int brr[]) // The Parameter 'brr[]' is a "POINTER" that points the "ADDRESS" of the "FIRST ELEMENT" of array arr
//                        ⬆️
//    Not compulsory to specify size of array (B/C brr is not an ARRAY --> It is a POINTER)
{
    for (int i = 0; i < 5; i++)
    {
        cout << brr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 88, 9, 2, 43};
    Passing_Array(arr);
    //            ⬆️
    // Here, the argument 'arr' means that we are passing the "ADDRESS" of the "FIRST ELEMENT" of the array arr
    //                                     or we are passing the "ADDRESS" of the "ZEROTH INDEX" of the array arr
}