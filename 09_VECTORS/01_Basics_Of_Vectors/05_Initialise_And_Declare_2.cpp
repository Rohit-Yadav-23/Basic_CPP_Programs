
//         INITIALISATION OF VECTOR AT THE TIME OF DECLARATION

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v[0] << endl;        ==> This prints nothing --> B/c this is not possible

    vector<int> a(5);     // ==> But after giving the size to vector at the time of declaration
    cout << a[0] << endl; // ==> This becomes POSSIBLE ie writing with INDEX NO. becomes POSSIBLE (while printing the element of vector)
    cout << a[4] << endl;

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    cout << endl;
    
    // All of the above will PRINT '0' because, We have declared a vector ---> But, we have not INITIALISE it
    //  So, UNINITIALISED VECTOR DOES NOT stores garbage value.

    // An uninitialised vector is automatically initialised with default values (0 for integers), whose values can be updated by the user.

    a[0] = 10;
    a[4] = 20;

    // After doing the above, the output will be 10 and 20 instead of 0 and 0

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}