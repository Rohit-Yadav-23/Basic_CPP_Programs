// Sum of all elements of an array

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;

    int arr[size];
    
    cout << "Enter " << size << " elements of array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum of elements of array is : " << sum;
}
