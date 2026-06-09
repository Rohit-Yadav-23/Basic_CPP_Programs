// CLEAR() and SHRINK_TO_FIT() FUNCTION in VECTOR

/* you can delete all the elements of a vector using the clear() function. 

This function removes all elements from the vector, leaving it empty, but does not deallocate the memory. 
If you want to completely release the memory used by the vector, you can use the shrink_to_fit() method after calling clear().*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    
    cout << v.size() << endl << endl;

    v.clear();                      // Clear all elements

    if (v.empty()) {                            // Check if vector is empty
        cout << "Vector is empty!" << endl;
        cout << v.size() << endl;
    }

    return 0;
}


/*clear() removes all elements from the vector, but the vector's capacity remains the same.
If you want to deallocate the memory as well, you can call v.shrink_to_fit() after clear():


v.clear();
v.shrink_to_fit();

empty() can be used to check if a vector has been emptied. It returns true if the vector contains no elements.
In summary, clear() is the standard function to remove all elements from a vector, but the memory remains allocated until 
you explicitly call shrink_to_fit() if you want to release that memory.*/