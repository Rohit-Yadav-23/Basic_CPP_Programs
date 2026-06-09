//  Move all zeros to the end of the array (Method-1)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 10, 2, 0, 8, 9, 0, 6, 0, 7, 6, 0, 9, 40};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
    
    int j = size - 1;
    for (int i = 0; i <= j; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[j]);
            j--;
        }

        if (arr[j] == 0)
            j--;
    }
    
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}