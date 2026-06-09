// WHY INITIALISATION OF VECTORS BY USING INDICES NUMBERS ARE THE WRONG WAY?

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;

    v.push_back(10);
    v[1] = 20;
    v[2] = 30;

    cout << v[0] << " " << v[1] << " " << v[2] << " ";
}


// The Output comes to be 10 20 30 
// And we get the same output as we want.
// But please check the next example...............................................