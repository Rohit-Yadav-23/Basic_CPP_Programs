// Taking Input and Printing Output In an ARRAY (Method - 1)

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter elements of array : ";
    cin >> arr[0];
    cin >> arr[1]; 
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];

    cout << "Output : ";
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " ";
    
    return 0;
}