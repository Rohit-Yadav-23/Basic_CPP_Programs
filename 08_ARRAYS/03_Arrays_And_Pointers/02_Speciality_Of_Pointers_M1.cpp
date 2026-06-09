// C++ Program to demonstrate "Speciality of Pointers" (Method-1)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;

    cout << ptr[0] << endl; // ==> This will Print the first element of array arr
                            // The most important point here is to be noted that ptr is a pointer. But still we can print the elements of array arr
                            // It means ptr also stores the elements of array arr
                            // Hence, we can say that ptr (which is a pointer) can also "performs" like an array


    cout << ptr[3] << endl; // The ptr (which is pointer) now becomes "an array"
                            // So, here we are printing the 4th element of array 'ptr'


    for (int i = 0; i < 6; i++) // here we are printing all the elements of array 'ptr'
    {
        cout << ptr[i] << " ";
    }

    return 0;
}

