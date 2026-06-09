// 2D VECTORS - INITIALISATION

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int> v2;
    v2.push_back(40);
    v2.push_back(50);

    vector<int> v3;
    v3.push_back(60);
    v3.push_back(70);
    v3.push_back(80);
    v3.push_back(90);
    v3.push_back(100);

    cout << v1[0] << " " << v1[2] << " " << v2[1] << " " << v3[0] << " " << v3[4] << endl;

    vector<vector<int>> v;

    // INITIALISATION OF 2D VECTOR

    // v.push_back(10);         ---> ERROR
    // v.push_back(20);         ---> ERROR

    v.push_back(v1); //  --> CORRECT INITIATLISATION
    v.push_back(v2); 
    v.push_back(v3); 

    // Now, ELEMENTS of VECTOR v are ----->    {{10, 20, 30}, {40, 50}, {60, 70, 80, 90, 100}};  ---->  {{v1}, {v2}, {v3}}

    cout << v[0][0] << endl;
    cout << v[1][0] << endl;
    cout << v[2][0] << endl;
    cout << v[0][2] << endl;
    cout << v[1][1] << endl;
    cout << v[2][3] << endl;
    cout << v[2][4] << endl;

    return 0;
}
