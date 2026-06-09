// Second Very Important Example of "Arrays and Pointers" in C++

#include <iostream>
using namespace std;

void Array(int brr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << *brr << " ";
        brr++;
    }
    cout << endl;
}

void Pointer(int *crr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << crr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

    Array(arr, 6);

    Pointer(arr, 6);

    return 0;
}

// int brr[] is a POINTER and int *crr --> ye to jag jahir hai ki wo ek POINTER hai