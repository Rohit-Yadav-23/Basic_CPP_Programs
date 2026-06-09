// INSERT FUNCTION in VECTOR

/* The insert function allows you to insert elements at a specific position, which can be identified using an iterator.

SYNTAX -->  vector_name.insert(position, element);

👉 "position" is an iterator pointing to the position where you want to insert the element.
👉 "element" is the value you want to insert. */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 50, 60};

    v.insert(v.begin() + 3, 40);         // Insert '40' at index 3 (4th position)

    cout << "v  : ";
    for (int x : v) 
        cout << x << " ";           
    
    

    vector <int> :: iterator it = v.insert(v.begin(), 104);                  // Insert '104' at 0th index (1st position)
//                      👆
 //  insert() FUNCTION returns an ITERATOR that POINTS to that LOCATION where NEW ELEMENT is INSERTED

    cout << endl << endl << "it : " << *it << endl;

    cout << "v  : ";
    for (int x : v) 
        cout << x << " ";

    cout << endl;


    vector<int> v1;
    vector<int> v2 = {5, 6, 7, 8};

    v1.insert(v1.end(), v2.begin(), v2.end());      // Append all elements of v2 to v1


    cout << endl  << "v1 : ";

    for (int x : v1)
        cout << x << " ";




    vector<int> v3 = {1, 2, 3, 4};
    vector<int> v4 = {5, 6, 7, 8};

    v3.insert(v3.end(), v4.begin(), v4.end());          // Append all elements of v4 to v3

    cout << endl << endl << "v3 : ";
    for (int x : v3)
        cout << x << " ";




    vector<int> v5 = {14, 24, 34, 44};

    v5.insert(v5.end(), {55, 65, 75, 85});      // Append multiple elements using initializer list


    cout << endl << endl << "v5 : ";
    for (int x : v5) {
        cout << x << " ";
    }
    return 0;
}
