//          GIVEN a SORTED ARRAY, find the LOWER BOUND ELEMENT of a given element                  

// LOWER BOUND ELEMENT is the LARGEST ELEMENT in the array that is JUST LESS THAN the GIVEN ELEMENT

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int>& arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;    // To avoid overflow

        if(arr[mid] == target)
        {
            return arr[mid-1];  // If the target is found, return the previous element as the lower bound
        }

        else if(arr[mid] < target){
            left = mid + 1;
        }

        else{
            right = mid - 1;
        }
    }

    return arr[right];   // arr[right] will be the LARGEST ELEMENT that is LESS than the target
    // at this stage, right POINTS to the LAST ELEMENT that is LESS than target ie right POINTS to the LOWER BOUND ELEMENT
}


int main()
{
    vector<int> arr = {1, 2, 4, 5, 9, 15, 18, 21, 24};

    int target;
    cout << "Enter the element to find the lower bound for: ";
    cin >> target;


    cout << "The lower bound of is: " << lowerBound(arr, target) << endl;

    return 0;
}