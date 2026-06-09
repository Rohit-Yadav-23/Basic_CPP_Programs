// Introduction to STRINGS (Method - 3)

//                       PROVING that the LAST CHARACTER in a STRING is a NULL CHARACTER

#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'1', '2', '3', '4', '5'};
    cout << arr[5] << endl; // Generates Warning or Sometime prints Garbage Value as '\0' is at 6th Position

    cout << "ASCII VALUE 1 : " << (int)arr[5] << endl;


    // FIRST PROOF

    char brr[10] = {'1', '2', '3', '4', '5'};
    cout << brr[5] << endl;
    cout << "ASCII VALUE 2 : " << (int)brr[5] << endl;          // As, ASCII Value of '\0' is 0 (ZERO)


    // SECOND PROOF

    char crr[10] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; crr[i] != '\0'; i++)
    {
        cout << crr[i];
    }
}
