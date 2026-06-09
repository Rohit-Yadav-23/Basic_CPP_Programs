//  Move all zeros to the end of the array (Method-2)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 10, 2, 0, 8, 9, 0, 6, 0, 7, 6, 0, 9, 40};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;

    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        
    return 0;
}