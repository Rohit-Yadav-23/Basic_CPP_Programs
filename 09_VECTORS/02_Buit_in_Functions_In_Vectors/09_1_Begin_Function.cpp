// BEGIN FUNCTION in VECTOR

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {10, 20, 30, 40, 50, 60};

    vector <int> :: iterator it = v.begin();

    cout << *it << endl << endl;

    it = v.begin()+1;

    cout << *it << endl << endl;


    cout << *(v.begin()+2) << endl << endl;

    cout << *(v.begin()+3) << endl << endl;

    vector<int> vec(v.begin(), v.begin()+4);
    //                 ⬆️        ⬆️
     // v.begin() is the starting index no.
     // v.begin()+4 is the RANGE or SIZE --> OR the NO. of elements to be COPIED

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    } 
    cout << endl;


    vector<int> vec2(v.begin()+2, v.begin()+4);
    //                 ⬆️        ⬆️
     // v.begin()+2 is the starting index no.
     // v.begin()+4 is the RANGE or SIZE --> OR the NO. of elements to be COPIED

    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }
    cout << endl;
    return 0;   
}