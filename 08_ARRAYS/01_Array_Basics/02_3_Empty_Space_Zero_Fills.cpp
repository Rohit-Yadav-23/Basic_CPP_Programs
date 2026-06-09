//                      EMPTY SPACE in ARRAY is FILLED with ZERO in C++

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}

// In C++, when we initialize an array with fewer elements than its declared size, the remaining elements are automatically filled with zero. In the above code, we have declared an array of size 10 but only initialized the first 5 elements. The output will show the first 5 elements as 1, 2, 3, 4, and 5, while the remaining 5 elements will be filled with zeros (0).