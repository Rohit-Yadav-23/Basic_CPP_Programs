// Declaration of a vector but not initialisation of a vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10); 

    for (int i = 0; i < v.size(); i++)              // As the vector is declared but not initialised, so it will print '0'
        cout << i << " " << v[i] << " " << "\n";


    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[4] = 40;
    v[8] = 50;

    cout << endl;

    for (int i = 0; i < v.size(); i++)
        cout << i << " " << v[i] << " " << "\n";

    return 0;
}