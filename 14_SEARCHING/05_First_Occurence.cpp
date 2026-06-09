//                Given a SORTED ARRAY, find the FIRST OCCURRENCE of a given element                          

//    FIRST OCCURRENCE is the INDEX of the FIRST ELEMENT in the array that is EQUAL to the GIVEN ELEMENT

#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int target)
{
    int left = 0, right = arr.size()-1;

    while(left <= right)
    {
        int mid = left + (right - left)/2;

        if(arr[mid] == target)
        {
            if(arr[mid-1] != target){
                return mid; 
            }

            else{   // arr[mid-1] = target
                right = mid - 1;
            }
        }

        else if(arr[mid] < target){
            left = mid + 1;
        }

        else{
            right = mid - 1;
        }
    }

    return -1;
}


int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 6, 6, 6, 7};
    
    int target;
    cout << "Enter the target : ";
    cin >> target;

    int result = firstOccurrence(arr, target);

    if(result == -1){
        cout << "target is NOT Found" << endl;
    }

    else{
        cout << "FIRST OCCURENCE of the target is : " << result << endl;
    }
}