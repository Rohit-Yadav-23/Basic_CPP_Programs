//             Given a SORTED ARRAY of NON-NEGATIVE DISTINCT INTEGERS, find the SMALLEST MISSING NON-NEGATIVE ELEMENT in it       

//    SMALLEST MISSING NON-NEGATIVE ELEMENT is the SMALLEST POSITIVE INTEGER that is NOT PRESENT in the SORTED ARRAY

#include <iostream>
#include <vector>
using namespace std;


int smallestMissingPositiveElement(vector<int>& arr)
{
    int left = 0, right = arr.size() - 1;
    int ans = -1;

    while(left <= right)
    {
        int mid = left + (right - left)/2;

        if(arr[mid] == mid){
            left = mid + 1;
        }

        else{   
            ans = mid;
            right = mid - 1;
        }
    }

    return ans;
}


int smallestMissingPositiveElementUsingLinearSearch(vector<int>& arr){
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != i){
            return i;
        }
    }
    
    return -1;
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 6, 7, 8, 12, 13, 17, 18};

    // 5, 9, 10, 11, 14, 15, 16 --> all these positive elements are MISSING
     // But 5 is the SMALLEST MISSING POSITIVE NUMBER --> So, 5 is the ANSWER

    cout << "Smallest Missing Positive Element using BINARY SEARCH: " << smallestMissingPositiveElement(arr) << endl;


    cout << "Smallest Missing Positive Element using LINEAR SEARCH: " << smallestMissingPositiveElementUsingLinearSearch(arr) << endl;
}