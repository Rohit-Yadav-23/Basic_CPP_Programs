// Very Important Example of "Arrays and Pointers" in C++

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int *ptr = arr;                                             // Here ptr is pointing to 1st element

    for(int i=0; i<7; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    ptr = arr;

    *ptr = 5;  // This also means ptr[0] = 5
    ptr++;                                                      // Now ptr is pointing to 2nd element

    *ptr = 9;       // ptr[1] = 9
    ptr--;                                                      // Now ptr, starts pointing to 1st element again      
    
    
    ptr = arr;
    cout << endl;

    for(int i=0; i<7; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
}