// Taking Input and Printing Output IN ARRAY (Method - 2)

#include <iostream>
using namespace std;

int main()
{
    int arr[7];
    cout << "Enter the element of array : ";

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    cout << "Output : " << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    //                      OR
    for (int i = 0; i < 7; i++)
    {
        cout << i[arr] << " ";
    }

    cout << endl;

    for (int ele : arr) //  ele is a VARIABLE
    {
        cout << ele << " ";
    }
    return 0;
}

// arr[i] or [i]arr, both the writing techniques are correct