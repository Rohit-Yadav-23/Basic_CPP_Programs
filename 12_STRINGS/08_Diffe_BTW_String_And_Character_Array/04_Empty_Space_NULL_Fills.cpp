// Empty Space in a Character Array is Filled with NULL Characters by the Compiler in C++

#include <iostream>
using namespace std;
int main()
{
    char arr[10] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 0; i < 10; i++)
        cout << (int)arr[i] << " ";     // Here, Remaining 5 empty spaces are filled with NULL characters by the compiler. So, the output will be 65 66 67 68 69 0 0 0 0 0
}