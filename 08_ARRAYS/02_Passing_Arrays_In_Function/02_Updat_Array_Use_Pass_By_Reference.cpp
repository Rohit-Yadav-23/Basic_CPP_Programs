// Updating the ELEMENTS of ARRAY using CALL BY REFERENCE

#include <iostream>
using namespace std;

void Passing_Array(int brr[])
{
    for (int i = 0; i < 6; i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;
}

void Change_Element(int crr[])
{
    crr[0] = 100;
    crr[4] = 200;
}

int main()
{
    int arr[] = {23, 83, 92, 3, 1, 94};

    Passing_Array(arr);

    Change_Element(arr);

    Passing_Array(arr);

    return 0;
}