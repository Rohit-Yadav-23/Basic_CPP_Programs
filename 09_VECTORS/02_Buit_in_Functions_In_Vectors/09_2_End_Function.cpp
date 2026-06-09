/*
                    END() FUNCTION IN VECTOR

    end() function returns an iterator ie ADDRESS of that GARBAGE VALUE which is present at the next index of the LAST ELEMENT of the vector
    
    end() function returns an ITERATOR ie ADDRESS of that GARBAGE VALUE

    end() function returns the NEXT POSITION of the LAST ELEMENT ie GARBAGE VALUE
*/


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {10, 20, 30, 40, 50, 60};

    vector <int> :: iterator it = v.end();

    cout << *it << endl << endl;            

    it = v.end()-1;

    cout << *it << endl << endl;

    cout << *(v.end()-2) << endl << endl;              

    cout << *(v.end()+3) << endl << endl;            //  PRINTS the GARBAGE VALUE


    int x  = v.back();
    cout << x << endl << endl;

    cout << v.max_size() << endl << endl;            //    returns the MAXIMUM SIZE of the vector
}