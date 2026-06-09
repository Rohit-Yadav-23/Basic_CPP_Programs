
//                          PRINTING the ELEMENTS of VECTOR using RANGE BASED LOOPS                                 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {10, 20, 30, 40, 50, 60, 70, 80};

    for(int ele : v)                //  This is called RANGE BASED LOOPS or "for each loop" 
        cout << ele << " ";

    cout << endl; 
    
    for(int ele : v)
    {
        ele++;     //  ele is just a store a copy of elements of vector v. Changing in "ele" will NOT affect the elements of vector v.
        cout << ele << " ";
    }
}