// Second Largest Element in an Array

#include <iostream>
using namespace std;

int main()
{
    int arr[100];

    cout << "Enter array elements: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < 10; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Largest element is: " << largest << endl;
    cout << "Second largest element is: " << secondLargest;

    return 0;
}