// Size Function in Vector (Method-1)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    
    v.push_back(10);
    cout << v.size() << endl;

    v.push_back(20);
    cout << v.size() << endl;

    v.push_back(30);
    cout << v.size() << endl;

    v.push_back(40);
    cout << v.size() << endl;

    return 0;    
}

// Size function only counts the NO. Of ELEMENTS PRESENT in the Vector. It DOES NOT count the empty spaces those are present in the vector.