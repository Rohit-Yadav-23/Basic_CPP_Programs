// C++ Program to demonstrate "Speciality of Pointers" (Method-5)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int *ptr = arr;

    for(int i=0; i<7; i++)
    {
        cout << i[ptr] << " ";
    }

    cout << endl;

    for(int i=0; i<7; i++)
    {
        cout << i[arr] << " ";          // Here, i[arr] is also valid and it will print the elements of array arr
    }
    return 0;
}
