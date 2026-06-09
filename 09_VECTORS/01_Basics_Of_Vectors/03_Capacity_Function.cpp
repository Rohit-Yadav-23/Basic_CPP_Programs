// Capacity Function of Vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    
    v.push_back(10);
    cout << v.capacity() << endl;       // Here the capacity is full, so, CAPACITY FUNCTION will DOUBLE the CAPACITY of VECTOR

    v.push_back(20);
    cout << v.capacity() << endl;       // Here the capacity is full, so, CAPACITY FUNCTION will DOUBLE the CAPACITY of VECTOR       

    v.push_back(30);
    cout << v.capacity() << endl;       // Here the capacity is full, so, CAPACITY FUNCTION will DOUBLE the CAPACITY of VECTOR

    v.push_back(40);
    cout << v.capacity() << endl;


}

/*
When the capacity of the vector is full, then the capacity function will double the capacity of the vector. Hence, we can say that the capacity function is used to double the capacity of the vector when it is full.
*/