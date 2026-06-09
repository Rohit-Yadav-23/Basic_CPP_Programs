// LENGTH OF ARRAY in C++

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 34, 53, 23, 98, 53, 78, 92, 9, 0, 23, 832, 9823, 85321, 35, 3235, 8372 ,2134, 5421};

    int Length_Of_Array = sizeof(arr)/ sizeof(arr[0]);
    
    cout << Length_Of_Array;
    
    return 0;
}