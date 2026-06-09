// C++ Program to demonstrate "Speciality of Pointers" (Method-4)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int *ptr = arr;

    for (int i = 0; i < 7; i++)
    {
        cout << *ptr << " ";        // *ptr = value at the address stored in ptr
        ptr++;                      // Increase the address of element by 4 bytes, so that the pointer ptr starts to point next element
    }

    cout << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    ptr = arr;          // Now ptr is again pointing to the first element of array arr
    cout << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
}