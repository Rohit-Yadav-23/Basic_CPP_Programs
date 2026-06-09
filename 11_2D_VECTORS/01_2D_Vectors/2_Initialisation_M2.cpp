// Initialisation of 2D Vector using 1D Vectors

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

    vector<vector<int>> v(2); // Giving size of vector v at the time of DECLARATION

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}