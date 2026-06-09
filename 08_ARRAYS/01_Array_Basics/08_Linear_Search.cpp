// Linear Search in an Array

#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, key;

    cout << "Enter array elements: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int position = -1;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == key)
        {
            position = i;
            break;
        }
    }

    if(position != -1)
    {
        cout << "Element found at position " << position + 1;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}