//                  ANOTHER WAY OF INIITIALIZING THE VECTOR (USING INDEX NUMBER)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;

    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << endl;

    v[0] = 60;

    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << endl;

    return 0;
}

/*
Here, the push_back function creates the MEMORY SPACE, so, it becomes very easy for use to initialise the vector by using the index number
NOTE : Here, pushback function creates only single memory space (block), which stores the value 10
And the rest of the memory spaces (which stores the elements : 20, 30, 40, 50) are automatically generated
*/

//    INIITIALIZING THE VECTOR (USING INDEX NUMBER) =====> "IS A WRONG WAY OF INITIALIZING THE VECTORS"
//   This is discussed in the next code
