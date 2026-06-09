//                                Changing the value of a variable using a double pointer

#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *ptr = &a;

    int **dptr = &ptr;

    cout << "Value of **dptr: " << **dptr << endl;           // Value of a (which is 10)
    
    int x = 20;
    *dptr = &x;      // Changes the pointer ptr to point to x instead of a. Now, **dptr will give the value of x instead of a.


    cout << "Value of **dptr after change: " << **dptr << endl;      // Value of x (which is 20, as ptr now points to x, so **dptr gives the value of x)

    return 0;
}



//    Remember:

//  1.     **dptr == *ptr == a
// 2.     *dptr == ptr == &a