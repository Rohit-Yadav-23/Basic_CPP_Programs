/*
Pointer Arithmetic in C++

Operations Allowed in Pointer Arithmetic

1.  Increment (++)
2.  Decrement (--)
3.  Addition (+)
4.  Subtraction (-)
5.  Difference between pointers (Only when they point to elements of the SAME array)
*/


#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    int *ptr = arr;

    cout << "Value : " << *ptr << " Address : " << ptr << endl;

    //  Increment

    ptr++;       // Moves the pointer to the next integer in the array (ptr now points to arr[1])
     // "ptr++" does NOT change the value by 1, it changes the value by the size of the data type it points to. Since ptr is an integer pointer, it moves by 4 bytes (size of an integer) to point to the next element in the array. So, "sizeof(int)" is added to the current address stored in ptr to move to the next integer.

    cout << "Value : " << *ptr << " Address : " << ptr << endl;



    //  Decrement
    ptr--;      // Moves the pointer back to the previous integer in the array (ptr now points back to arr[0])

    cout << endl << "Value : " << *ptr << " Address : " << ptr << endl;



    //  Addition
    ptr += 4;    // Moves the pointer forward by 4 integers in the array (ptr now points to arr[4])

    cout << endl << "Value : " << *ptr << " Address : " << ptr << endl;


    //  Subtraction
    ptr -= 2;    // Moves the pointer back by 2 integers in the array (ptr now points to arr[2])

    cout << endl << "Value : " << *ptr << " Address : " << ptr << endl;


    //  Difference between pointers
    int *ptr1 = &arr[2];   
    int *ptr2 = &arr[5];
    int diff = ptr2 - ptr1;    // Calculates the difference in terms of number of integers between ptr2 and ptr1 (ptr2 - ptr1 gives the number of elements between ptr2 and ptr1)

    cout << "Difference in terms of number of integers between ptr2 and ptr1: " << diff << endl;
    return 0;
}


/*
    INVALID POINTER ARITHMETICS

1. ADDITION of TWO POINTERS is NOT allowed. (ptr1 + ptr2) is INVALID. As, this makes NO sense to add TWO MEMORY ADDRESSES TOGETHER.
2. MULTIPLICATION of TWO POINTERS is NOT allowed. (ptr1 * ptr2) is INVALID. 
3. DIVISION of TWO POINTERS is NOT allowed. (ptr1 / ptr2) is INVALID.
4. MULTIPLICATION with an INTEGER is NOT allowed. (ptr1 * 2) and (2 * ptr1) are INVALID.
5. DIVISION with an INTEGER is NOT allowed. (ptr1 / 2) is INVALID.
*/