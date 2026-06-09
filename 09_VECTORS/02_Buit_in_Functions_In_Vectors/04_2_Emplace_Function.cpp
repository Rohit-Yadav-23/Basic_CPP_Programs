// EMPLACE FUNCTION in VECTOR

/*
    "emplace() FUNCTION" is used to insert elements at the given position in a vector by constructing it in-place within 
    the vector. The "emplace() function" is SIMILAR to "insert() FUNCTION".

    "emplace() FUNCTION" returns an "ITERATOR" that POINTS to the ADDRESS of the INSERTED ELEMENT or POINTS to that LOCATION 
    where the NEW ELEMENT is INSERTED by using "emplace() FUCNTION"
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> v = {10, 50, 80};

    vector <int> :: iterator x = v.emplace(v.begin() + 2, 60);            // Inserting 60 at index 2
//                      👆
 //   emplace() function RETURNS an ITERATOR that POINTS to that LOCATION where THE NEW ELEMENT is INSERTED         

    cout << *x << endl;

    for (auto i : v)
        cout << i << " ";

    cout << endl << endl;
    

    v.emplace(v.end(), 100);              // Insert element 100 at the end 

    for (auto i : v)
        cout << i << " ";


    auto iter = v.emplace(v.end(), 1100);              // Insert element 1100 at the end

    cout << endl << endl << *iter <<  endl;

    for (auto i : v)
        cout << i << " ";

    return 0;
}
