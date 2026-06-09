// About npos

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << string::npos; // * npos is a CONSTANT STATIC MEMBER of the string class that represents a NON-EXISTENT POSITION in a string. It is typically used to indicate that a search operation did NOT find the desired substring or character in the string. The value of npos is usually defined as -1 or the maximum value of size_t, depending on the implementation of the string class.

    // ? size_t is an unsigned integral type that is used to represent the size of objects in bytes.
    
    cout << endl << size_t(-1);     // // Here, '-1' is TYPECASTED to size_t, which results in the maximum value of size_t, which is typically 4294967295 on a 32-bit system and 18446744073709551615 on a 64-bit system.
}