//                                      BUBBLE SORT  (MORE OPTIMIZED VERSION)                                                     

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        bool flag = true;
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);      // ADJACENT ELEMENTS are SWAPPED
                flag = false;
            }
        }

        if(flag == true){           //  If no swaps were made, the array is sorted --> STOP at this point --> NO NEED for further PASSES
            break;
        }
    }
}

int main()
{
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8};
    int n = sizeof(arr)/sizeof(int);

    for(int ele : arr){
        cout << ele << " ";
    }

    cout << endl;

    bubbleSort(arr, n);

    for(int ele : arr){
        cout << ele << " ";
    }

    return 0;
}