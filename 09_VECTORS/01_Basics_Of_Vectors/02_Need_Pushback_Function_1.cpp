//                  ANOTHER WAY OF INIITIALIZING THE VECTOR (USING INDEX NUMBER)

//                      WHY WE NEED push_back FUNCTION?

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; 

    v[0] = 22; // INITIALISES VECTOR by 22 or assigning the vector of zeroth index  ==> But the initialisation is not possible

    cout << v[0] << endl; // NOTHING WILL PRINT IN THE TERMINAL
}

/*
Why nothing prints in the terminal?

This is because push_back() function does two works...............
1. It assigns any value or element into the vector
2. It Generates memory space (or size) in vector, so that the elements can store in to that empty space */

/*
But in the above code, we haven't use the push_back() function, and we have directly initialises the vector ie v[0] = 22
So, our vector does not get the value 22

This is because no memory space has been generated because we have not used the push_back() function */

// for more details check the next code