// Size and Capacity of vector with pop_back() function

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    
                                //    SIZE      CAPACITY
    v.push_back(10);            //      1           1
    v.push_back(20);            //      2           2
    v.push_back(30);            //      3           4
    v.push_back(40);            //      4           4
    v.push_back(10);            //      5           8
    v.push_back(20);            //      6           8
    v.push_back(30);            //      7           8
    v.push_back(40);            //      8           8
    v.push_back(10);            //      9           16
    v.push_back(20);            //      10          16
    v.push_back(30);            //      11          16
    v.push_back(40);            //      12          16
    v.push_back(10);            //      13          16
    v.push_back(20);            //      14          16
    v.push_back(30);            //      15          16
    v.push_back(40);            //      16          16
    v.push_back(10);            //      17          32
    v.push_back(20);            //      18          32  
    v.push_back(30);            //      19          32  
    v.push_back(40);            //      20          32
    v.push_back(10);            //      21          32
    v.push_back(20);            //      22          32 
    v.push_back(30);            //      23          32
    v.push_back(40);            //      24          32

    cout << "Size of the vector v is : " << v.size() << endl;
    cout << "Capacity of the vector v is : " << v.capacity() << endl;
    cout << endl;

                             //    SIZE      CAPACITY
    v.pop_back();            //      23         32
    v.pop_back();            //      22         32
    v.pop_back();            //      21         32
    v.pop_back();            //      20         32
    v.pop_back();            //      19         32
    v.pop_back();            //      18         32
    v.pop_back();            //      17         32
    v.pop_back();            //      16         32
    v.pop_back();            //      15         32
    v.pop_back();            //      14         32
    v.pop_back();            //      13         32
    v.pop_back();            //      12         32
    v.pop_back();            //      11         32
    v.pop_back();            //      10         32
    v.pop_back();            //       9         32
    v.pop_back();            //       8         32
    v.pop_back();            //       7         32
    v.pop_back();            //       6         32  
    v.pop_back();            //       5         32  
    v.pop_back();            //       4         32
    v.pop_back();            //       3         32
    v.pop_back();            //       2         32 
    v.pop_back();            //       1         32
    v.pop_back();            //       0         32

    cout << "Size of the vector v is : " << v.size() << endl;
    cout << "Capacity of the vector v is : " << v.capacity() << endl;
}