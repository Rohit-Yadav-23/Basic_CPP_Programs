/*
                        ITERATORS IN C++

 Iterator : An iterator is any OBJECT that, "POINTING" to SOME ELEMENT in a "RANGE of ELEMENTS" (such as an ARRAY or a CONTAINER),
 has the ability to ITERATE through the elements of that RANGE. 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {10, 20, 30, 40, 50, 60, 70, 80};

    vector <int> :: iterator it = v.begin();        // SYNTAX of DECLARING an ITERATOR

    cout << "First Element : " << *it << endl;      // Dereferencing the iterator to get the value it points to
    cout << "Second Element : " << *(it+1) << endl; 
    cout << "Third Element : " << *(it+2) << endl << endl;  


    cout << "All Elements : ";
    for(it = v.begin(); it != v.end(); it++)    // Using ITERATOR to TRAVERSE the VECTOR 
        cout << *it << " ";


    /*
        int a = 5;
        int :: iterator iter = &a;
    !   This gives ERROR 
        because an ITERATOR is used for those DATA STRUCTURES that STORES A SERIRES OF DATA or VALUES like --> vectors, arrays, linked lists,
        Maps and Sets, Trees
    */

        
    /*
        int *ptr = v.begin();
        cout << *ptr;           
    !   This gives ERROR 
    */
}

/*
Pointer : A pointer is a variable that contains the address of another variable, i.e., the address of the memory location of
the variable. Like any variable or constant, we must declare a pointer before using it to store any variable address.   */