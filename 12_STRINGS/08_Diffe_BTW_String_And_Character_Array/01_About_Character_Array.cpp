//  CHARACTER ARRAY MEANS ARRAY OF CHARACTERS

#include <iostream>
using namespace std;
int main()
{
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};        /* This is a CHARACTER ARRAY. This is NOT a STRING */

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}

// ALL strings ARE character arrays, but ALL characters arrays ARE NOT strings

// A CHARACTER ARRAY is just an ARRAY of CHARACTERS, which stores CHARACTERS as an ELEMENT in the CONTIGUOUS MEMORY LOCATION