// Pass By Value in Vectors

#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> a) // vector a ke andar vector v ke elements ko copy kiya hai
{
    a[0] = 80;
    a[4] = 100;

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    vector<int> v;

    cout << "Elements of vector : ";

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    change(v);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}

/*
First Output: 10 20 30 40 50 60

Second Output: 80 20 30 40 100 60   --> I have changed the 1st and 5th element of the vector v in "change FUNCTION"

Third Output: 10 20 30 40 50 60     --> But, There is no change in the Third output

This is because, when we pass the vector v in the function change(), then all the elements of vector v are copied into the vector a (which is the parameter of the function change()) and hence, we can say that vector a is a "COPY" of vector v and hence, when we change the elements of vector a in the function change(), then it does not affect the elements of vector v because vector a is a "COPY" of vector v and hence, we can say that vector v is passed by value in the function change().
*/

// Vectors are Passed by Value --> Each time you Pass, new VECTOR is CREATED in that FUNCTION

// But we can pass vector as PASS BY REFRENCE --> How?   --> Check the next TUTORIAL PROGRAM
