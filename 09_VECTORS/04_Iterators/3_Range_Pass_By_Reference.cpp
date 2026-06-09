//     Range Based Loops creates a COPY of the ELEMENTS of the vector. (PASS BY VALUE)                      

#include <bits/stdc++.h>
using namespace std;

// Function 1: auto (copy, modifiable)
void demoAuto(vector<int> v) 
{
    cout << "\n[auto] (copy, modifiable)\n";

    for (auto x : v)   // x is a copy
    {
        x += 10;        // modifies only the copy
        cout << x << " ";  
    }

    cout << "\nOriginal vector unchanged: ";

    for (int i : v) 
        cout << i << " ";

    cout << "\n";


    //    x is a COPY of each element in v.
    //    Modifying x does NOT affect v.
}



// Function 2: auto& (reference, modifiable)
void demoAutoRef(vector<int> &v) 
{
    cout << "\n[auto&] (reference, modifiable)\n";

    for (auto &x : v)   // x is a reference
    {
        x += 10;         // modifies the real vector
        cout << x << " ";  
    }

    cout << "\nOriginal vector changed: ";

    for (int i : v)
        cout << i << " ";

    cout << "\n";

    //    x is a REFERENCE to the actual element in v.
    //   CHANGES are REFLECTED BACK in the vector.
}



// Function 3: const auto (copy, read-only)
void demoConstAuto(vector<int> v) 
{
    cout << "\n[const auto] (copy, read-only)\n";

    for (const auto x : v) 
    {
        cout << x << " ";  
        // x += 10;  // ❌ ERROR: x is const copy, uncomment to see compiler error
    }

    cout << "\nOriginal vector unchanged: ";

    for (int i : v) 
        cout << i << " ";

    cout << "\n";

    // This does create a COPY of each element.
    // But the copy itself is const, so you CANNOT modify it.

}




// Function 4: const auto& (reference, read-only)
void demoConstAutoRef(const vector<int> &v) 
{
    cout << "\n[const auto&] (reference, read-only)\n";

    for (const auto &x : v) 
    {
        cout << x << " ";  
        // x += 10;  // ❌ ERROR: x is const reference, uncomment to see compiler error
    }

    cout << "\nOriginal vector unchanged (and no copy was made).\n";

    // This does NOT create a copy.
    // Instead, it creates a READ-ONLY REFERENCE to each element of v.

}

int main() 
{
    vector<int> v = {1, 2, 3};

    demoAuto(v);
    demoAutoRef(v);
    demoConstAuto(v);
    demoConstAutoRef(v);

    return 0;
}



/*     
    Quick rule of thumb ✅

    Use auto → if you need a COPY and plan to modify it WITHOUT touching the original.

    Use auto& → if you want to MODIFY the ORIGINAL ELEMENTS in the container.

    Use const auto → if you need a COPY to READ the values (NOT to modify the original elements in the container).

    Use const auto& → if you only need to READ the values (NOT to modify the original elements in the container).

*/

/*

    1. auto

    Works on copies, so original vector is unchanged.
    You can modify the local copy.


    2. auto&

    Works on references, so original vector gets modified.

    3. const auto

    Works on copies, but they are read-only.
    No modification possible (compiler error if you try).


    4. const auto&

    Works on references, but read-only.
    No copy is made, and you can’t modify original.

*/