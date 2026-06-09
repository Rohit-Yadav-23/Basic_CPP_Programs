// UPDATING the size of vector on COMPILE TIME

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(4); 
    cout << endl << "Original size of vector : " << v.size() << endl;

    cout << "Elements are : ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // INCREASING the SIZE of VECTOR

    int n;
    cout << "\n\n" << "Add new no. of sizes : ";
    cin >> n;

    cout << "Enter new Elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << endl << "New Updated size of vector is : " << v.size() << endl;

    cout << "Updated elements of vector are : ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // Now REDUCING the size of vector

    int y;
    cout << "\n\n" << "Enter the no. of reducted size : ";
    cin >> y;

    for (int i = 0; i < y; i++)
    {
        v.pop_back();
    }

    cout << "New size becomes : " << v.size() << endl;
    
    cout << "New elements are : ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}