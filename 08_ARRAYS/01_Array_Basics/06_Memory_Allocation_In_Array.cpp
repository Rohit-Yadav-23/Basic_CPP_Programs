// Memory Allocation in Array

#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    cout << &arr[5] << endl;
    cout << &arr[6] << endl;
    cout << &arr[7] << endl;

    cout << endl;
    cout << &arr;   // &arr holds the address of the first byte of the first element of array, which is same as &arr[0] 
    // ==> &arr == &arr[0]



    cout << endl << endl;
    cout << arr;
    // This will also print the address of the first byte of the first element of array    ==> This will not print any element of the array
    // --> &arr[0] == &arr == arr


    // &arr[0] == &arr == arr ====> All these "THREE" words HOLDS the "ADDRESS" of the "FIRST ELEMENT OF ARRAY"

    return 0;
}

// There will be a difference of 4 bytes in Memory Address of each and every ELEMENTS OF ARRAY 
