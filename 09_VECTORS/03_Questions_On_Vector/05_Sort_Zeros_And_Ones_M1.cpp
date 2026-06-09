//      SORT THE ARRAY'S OF 0'S AND 1'S

//          TWO POINTERS APPROACH

// Here POINTERS means ==> We are using 2 variables that are pointing to 0th index and last index of the vector
// Here POINTER does not means "*ptr" ==> that stores address

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> v;
    cout << "Enter the elements of vector only in the form of 0's and 1's : ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int i = 0;            // Here I am using variable i and j ==> that points the 0th and last index of the vector v
    int j = v.size() - 1; // that's why we say that we are using TWO POINTERS approach to solve this Question

    while (i < j)
    {
        if (v[i] == 0)
            i++;

        if (v[j] == 1)
            j--;

        if (i > j) // VERY IMPORTANT TO NOTICE  ==> 1 1 0 1 0 1 1 0
            break;

        if (v[i] == 1 && v[j] == 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;

            i++;
            j--;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

/*
    2nd METHOD

    if(v[i] == 0)
    i++;


    else if(v[j] == 1)
    j--;

    else if(v[i] == 1 && v[j]== 0)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }


    3RD METHOD

    if(v[i] == 0)
    i++;


    if(v[j] == 1)
    j--;

    else if(v[i] == 1 && v[j]== 0)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }



    4TH METHOD


    if(v[i] == 1 && v[j]== 0)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }

    if(v[i] == 0)
    i++;

    if(i>j)
    break;

*/