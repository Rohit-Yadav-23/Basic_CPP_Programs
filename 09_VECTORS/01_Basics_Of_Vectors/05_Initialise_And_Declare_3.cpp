
//         INITIALISATION OF VECTOR AT THE TIME OF DECLARATION

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(5, 9); // ==> HERE, we are giving the size ie 5 and element 9 at the time of declaration to the vector 'a'
                         // ==> That means here, INITIALISATION and DECLARATION both are done at the same time

    for (int i = 0; i < a.size(); i++) // Each element of this vector is now becomes '9'
        cout << a[i] << " ";

    cout << endl;

    a[0] = 10;
    a[1] = 20; 
    a[3] = 30;

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    
    return 0;
}