// Taking elements as input in 2D vector ----> USING push_back FUNCTION
// GIVING the SIZE of the 2D VECTOR at the TIME of DECLARATION
// Method - 2


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v(5, vector<int>(5));
    vector<int> v1(5);
    vector<int> v2(5);
    vector<int> v3(5);
    vector<int> v4(5);
    vector<int> v5(5);

    v1[0] = 1, v1[1] = 4, v1[2] = 7, v1[3] = 11, v1[4] = 15;
    v2[0] = 2;
    v3[0] = 3, v3[1] = 6, v3[2] = 9, v3[3] = 16;
    v4[0] = 10, v4[1] = 13;
    v5[0] = 18, v5[1] = 21, v5[2] = 23;

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}