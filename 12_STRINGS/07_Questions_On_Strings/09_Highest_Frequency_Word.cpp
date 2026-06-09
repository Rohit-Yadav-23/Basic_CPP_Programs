/*  Given a sentence 'str', return the word that is occuring most number of times in that  */

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string str = "raghav is a maths teacher. He is a DSA mentor!!!!";

    vector<string> v;
    string temp;
    stringstream ss(str);

    while (ss >> temp)
    {
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    cout << endl;

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    int maxcount = 1;
    int count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;

        else
            count = 1;

        maxcount = max(maxcount, count);
    }

    cout << "\nMAXIMUM NO. OF ELEMENTS ARE : \n";
    count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;

        else
            count = 1;

        if (maxcount == count)
            cout << v[i] << " " << maxcount << endl;
    }
}