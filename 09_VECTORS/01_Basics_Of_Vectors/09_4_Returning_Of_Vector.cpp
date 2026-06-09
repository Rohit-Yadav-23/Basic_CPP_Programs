// RETURNING OF A VECTOR from a function

#include <iostream>
#include <vector>
using namespace std;

vector<int> Return_Vector(vector<int> &a)
{
    a[0] = 80;
    a[3] = 90;
    a[4] = 100;

    return a;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    vector<int> receive = Return_Vector(v);

    for (int i = 0; i < receive.size(); i++)
        cout << receive[i] << " ";

    return 0;
}
