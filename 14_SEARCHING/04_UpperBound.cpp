//            FIND the UPPER BOUND ELEMENT of a given element in a SORTED ARRAY                           

//    UPPER BOUND ELEMENT is the SMALLEST ELEMENT in the array that is JUST GREATER THAN the GIVEN ELEMENT

#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int>& arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right)
    {
        int mid = left + (right - left)/2;

        if(arr[mid] == target){
            return arr[mid + 1];     // If the target is found, return the next element as upper bound
        }

        else if(arr[mid] < target){
            left = mid + 1;
        }

        else{
            right = mid - 1;
        }
    }

    return arr[left];    // If the target is not found, return the SMALLEST element GREATER than target ie arr[left]
     // at this stage, left POINTS to the FIRST ELEMENT that is GREATER than target ie left POINTS to the UPPER BOUND ELEMENT
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 9, 15, 18, 21, 24};

    int target;
    cout << "Enter the element to find the upper bound for: ";
    cin >> target;


    cout << "The upper bound of is: " << upperBound(arr, target) << endl;

    return 0;
}