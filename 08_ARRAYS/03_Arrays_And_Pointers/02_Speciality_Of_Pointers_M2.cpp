// C++ Program to demonstrate "Speciality of Pointers" (Method-2)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;         // Here we are giving the address of the first element of the array arr
                            // Which indirectly means that we have given the "ACCESS OF THIS ENTIRE ARRAY arr" to the "pointer ptr"

    for(int i=0; i<6; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << endl;


    ptr[0] = 90;        // Modifying the elements of the array arr with the help of pointer ptr
    ptr[4] = 32;

    for(int i=0; i<6; i++)
    {
        cout << ptr[i] << " ";
    }
    return 0;
}

// From this example, we can find that POINTERS have the capability to modify that array