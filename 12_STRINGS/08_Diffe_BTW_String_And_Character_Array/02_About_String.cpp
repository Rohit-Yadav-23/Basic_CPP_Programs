// Character Array and String in C++

#include <iostream>
using namespace std;
int main()
{
    char arr[6] = {'A', 'B', 'C', 'D', 'E', '\0'};        /* This is a STRING */
    
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
}
/* This is a CHARACTER ARRAY and STRING "BOTH" */

// A STRING is a CHARACTER ARRAY which is TERMINATED by a 'NULL CHARACTER'