// Dynamic Memory Allocation using Pointers in C++

// Pointers are also used to create dynamic memory during runtime using `new` operator. Dynamic memory allocation allows us to allocate memory on the heap, which is useful when we don't know the size of data at compile time or when we want to manage memory manually.

#include<iostream>
using namespace std;

int main()
{
    int *p = new int;        // "new int" allocates memory for an integer on the heap and returns a pointer to that memory, which is stored in `p`. Initially, the value at that memory location is uninitialized (garbage value).

    cout << "Value at p (uninitialized): " << *p << endl;
    *p = 50;

    cout << "Value at p (after assignment): " << *p << endl;

    delete p;     // "delete p" deallocates the memory that was allocated for the integer. After this, `p` becomes a dangling pointer (it still holds the address of the deallocated memory), so we should not dereference it after deletion.

    return 0;
}


