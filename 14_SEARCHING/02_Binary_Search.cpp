//                                            BINARY SEARCH                                                        

 //   For using BINARY SEARCH, the array must be SORTED in ASCENDING ORDER
 //   TIME COMPLEXITY: O(log n)
 //   SPACE COMPLEXITY: O(1)

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) 
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;  //  To AVOID OVERFLOW

        if (arr[mid] == target) {
            return mid; //*  Target found
        } 
        
        else if (arr[mid] < target) {
            left = mid + 1; //*  Search in the right half
        } 
        
        else {
            right = mid - 1; //*  Search in the left half
        }
    }

    return -1; //*  Target not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};                   //  SORTED ARRAY

    int target;                              // Element to search for
    cout << "Enter the element to search for: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } 
    
    else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

//    this line --> int mid = left + (right - left) / 2
//   can also be written as --> int mid = (left + right) / 2 --> but this can cause OVERFLOW when left and right are large numbers