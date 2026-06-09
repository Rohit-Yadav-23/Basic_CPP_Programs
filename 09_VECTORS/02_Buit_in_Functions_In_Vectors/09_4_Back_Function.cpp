// BACK() FUNCTION IN VECTOR

//  back function returns the LAST ELEMEMT of VECTOR

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "The last element is: " << v.back() << endl;

    cout << v.back() + 1 << endl;

    cout << v.back() + 4 << endl;

    return 0;
}