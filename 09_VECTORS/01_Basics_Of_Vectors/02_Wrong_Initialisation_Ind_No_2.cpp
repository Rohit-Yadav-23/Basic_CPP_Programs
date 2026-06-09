// WHY INITIALISATION OF VECTORS BY USING INDICES NUMBERS ARE THE WRONG WAY?

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v[1] = 20;                  // THIS IS NOT A RIGHT WAY TO DO IT ==> THIS GIVES US AN ERROR

    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4];
}

// The output we want is ==> 10 20 30 40 50

// But the output comes is 10 30 40 50 GARBAGE VALUE


/*  Question is that why are we getting the garbage value instead of 20 in the above code? 

This happens because the push_back function checks the last element and after checking the last element, it creates empty space (just after the last checked element) . So, the new element inserts successfully, into that empty space Which initialises the vector.

But the initialisation that we are making with index number ie v[1] = 20, does not creates any empty space. Hence, element 20 becomes unable to store. That's why element 20, doesn't become the element of vector.


and after the v[1] = 20;
I have write push_back(30)  ==> This push_back function will check the previous element
And the previous element is 10, so push_back function will make a new empty space just after the element 10, and it will inserts 30 in it.

Similarly, push_back(40) will check the previous element ie 30, and then, push_back function will make an empty space just after element 30 and inserts 40 into it.


Similar to push_back(50)

and in the last index, GARBAGE VALUE WILL AUTOMATICALLY STORED ie v[4] will prints the GARBAGE VALUE because it is empty*/