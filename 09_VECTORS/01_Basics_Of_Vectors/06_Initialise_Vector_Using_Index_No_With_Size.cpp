
// IMPORTANT POINT TO REMEMBER ABOUT INITIALISATION OF VECTOR using INDEX NO --> when we GIVE SIZE of VECTOR at the time of DECLARATION

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(9);
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}

// The DEFAULT VALUE of a VECTOR is "ZERO"

/*
and this    v[0] updates the value of vector from zero to 10
similarly,  v[1] updates the value of vector from zero to 20
            v[2] updates the value of vector from zero to 30
            v[3] updates the value of vector from zero to 40

And rest, v[4], v[5], v[6], v[7], v[8] will not gets any kind of updation
So, the output of this code will be : 10 20 30 40 0 0 0 0 0

*/