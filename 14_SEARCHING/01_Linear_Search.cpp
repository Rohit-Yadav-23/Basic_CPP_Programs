//                                    LINEAR SEARCH

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / 4;

    int ele;
    cout << "Enter element which you want to search : ";
    cin >> ele;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            cout << "Element is Found!!!";
            flag = true;
            break;
        }
    }

    if (flag == false)
    {
        cout << "Element is NOT Found!!!";
    }

    return 0;
}