
//      IMPORTANT POINT TO REMEMBER ABOUT INITIALISATION OF VECTOR using pushback --> when we GIVE SIZE of VECTOR at the time of DECLARATION

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}

// The DEFAULT VALUE of a VECTOR is "ZERO"

/*
The output is 0 0 0 0 0 10 20 30 40          --> WHY ?

This is because, at the time of declaration v(5) creates 5 empty spaces and INSERT'S "ZERO" as the "DEFAULT VALUE" of the VECTOR v and now this push_back function appends the empty space just after the fifth element (ie fifth zero) of the vector v.

As, push_back() function appends the empty space just after the fifth element (ie fifth zero) of the vector v, so, the output becomes 0 0 0 0 0 10 20 30 40 

*/