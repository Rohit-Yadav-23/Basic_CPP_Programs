// String Variable in C++

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl;
    // Here, arr will print the address of the first element  --> b/c arr is an INTEGER ARRAY

    char brr[5] = {'1', '2', '3', '4', '5'};
    cout << brr << endl;
    // This will Print any Random Characters --> b/c brr is NEITHER an INTEGER ARRAY NOR a STRING --> It is just a CHARACTER ARRAY 

    char crr[6] = {'1', '2', '3', '4', '5'};
    cout << crr << endl;
    // This will print all the CHARACTERS --> WITHOUT USING LOOP --> b/c crr is a character array and crr is a STRING also
}