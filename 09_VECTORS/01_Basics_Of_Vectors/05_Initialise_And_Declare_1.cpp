
//         INITIALISATION OF VECTOR AT THE TIME OF DECLARATION

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity of the vector v is : " << v.capacity() << endl;
    cout << "Size of the vector v is : " << v.size() << endl << endl;

    vector<int> a(5); // ==> This means that we have initialise a vector 'a' whose size is 5 at the time of declaration
    cout << "Capacity of the vector a is : " << a.capacity() << endl;
    cout << "Size of the vector a is : " << a.size() << endl;
}