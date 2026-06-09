// C++ Program to demonstrate "Arrays and Pointers" (Example-1)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    
    int *ptr1 = arr;                // Prints the address of the first element of the array arr
    // int *ptr2 = &arr;            // Error

    int *ptr3 = &arr[0];            // Prints the address of the first element of the array arr
    // int *ptr4 = arr[0];          // Error

    cout << ptr1 << endl << ptr3;
}