// Passing Vectors through Pass By Refrence

#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> &a)
{
    a[0] = 80;
    a[4] = 200;

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    cout << a.size() << endl;
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

    change(v);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}

/*
Here &a --> Points the address of the first element of vector v

Here, PASS BY REFRENCE TAKES place, Which means that no copy of vector v is created --> Only address of the first element of vector v
is passed. That's why changes made in the function change() are reflected in the main() function.


So, vectors can be PASSED BY VALUE as well as by REFERENCE. 

*/