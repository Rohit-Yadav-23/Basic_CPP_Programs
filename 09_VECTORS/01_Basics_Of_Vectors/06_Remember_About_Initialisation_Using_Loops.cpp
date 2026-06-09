
//              IMPORTANT POINT IN INITIALISATION OF VECTORS BY USING LOOPS

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "Enter elements : ";
    for (int i = 0; i < v.size(); i++) // Size of vector is '0' ==> So, loop will not run
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

/* Compilar will not take any single input
B/c vector is declared, but it does not have the empty spaces to store it.
This is because, at line no. 13 ==> size of the vector is '0' ==> v.size() gives '0'
So, the loop will not run

Hence, vector will not get any kind of value as an input
 */