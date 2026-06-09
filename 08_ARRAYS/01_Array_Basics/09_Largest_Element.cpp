// Largest Element in an Array

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[10];

    cout << "Enter array elements: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int largest = INT_MIN;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element is: " << largest;

    return 0;
}