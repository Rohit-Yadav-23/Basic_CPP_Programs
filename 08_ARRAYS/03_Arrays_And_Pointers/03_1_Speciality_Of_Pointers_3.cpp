// Two ways of printing the ELEMENTS OF ARRAY USING POINTER (Method-3)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

    int *ptr = arr;
    // ptr now starts pointing the address of the first element of array arr

    ptr[0] = 34;                // Modifying the elements of array arr using pointer ptr
    ptr[4] = 97;               

    for (int i = 0; i < 6; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << endl;

    //                                  OR

    for (int i = 0; i < 6; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
}

// For more details read the next code