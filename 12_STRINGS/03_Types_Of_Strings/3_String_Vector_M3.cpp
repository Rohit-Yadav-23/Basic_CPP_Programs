// Vector of String (Method - 3)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of STRING VECTOR : ";
    cin >> n;

    cin.ignore();

    vector <string> v(n);
    cout << "Enter the elements of STRING VECTOR v :\n";
    for(int i=0; i<n; i++)
    {
        getline(cin, v[i]);
    }

    cout << "\nOutput are : \n";
    for(string i : v)
        cout << i << endl;
}
