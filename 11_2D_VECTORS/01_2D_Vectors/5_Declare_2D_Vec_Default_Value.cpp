//     Declaration of a 2D vector with "DEFAULT VALUE"

// Syntax -->     vector <vector <int>> NAME_OF_VECTOR (SIZE, vector <int> (SIZE, DEFAULT_VALUE));

//     Here, SIZE is the number of ROWS and COLUMNS in the 2D vector.
//     vector <int> (SIZE) is used to declare a 1D vector of int type with SIZE.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v(6, vector<int>(4, 20));

    for (auto row : v)
    {
        for (auto elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<vector<float>> v2(4, vector<float>(3, 3.14));

    for (auto row : v2)
    {
        for (auto elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<vector<char>> v4(2, vector<char>(3, 'A'));

    for (auto row : v4)
    {
        for (auto elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<vector<string>> v3(3, vector<string>(2, "Rohit Yadav"));

    for (auto row : v3)
    {
        for (auto elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<vector<bool>> v5(3, vector<bool>(2, true));

    for (auto row : v5)
    {
        for (auto elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<vector<double>> v6(2, vector<double>(3, 3.14159265359));

    for (auto row : v6)
    {
        for (auto elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}