// Vector of String (Method - 1)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> v;
    v.push_back("Mr.");
    v.push_back("Alpha");
    v.push_back("Is");
    v.push_back("The");
    v.push_back("Best.......");

    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << " ";
}