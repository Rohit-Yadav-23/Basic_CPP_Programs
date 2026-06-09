// MOVE INITIALIZATION ----> Moves the CONTENTS of ONE VECTOR to ANOTHER, leaving the FIRST VECTOR EMPTY

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 40, 50};
    vector<int> v2(move(v1));
    //              ⬆️
    // MOVING the CONTENTS of the FIRST VECTOR v1 into the SECOND VECTOR v2 by using move function

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " "; // NOW, the FIRST VECTOR v1 becomes EMPTY

    cout << endl;

    for (int i = 0; i < v2.size(); i++) // ALL of the CONTENTS are NOW TRANSFERRED into the VECTOR v2
        cout << v2[i] << " ";
}