// Count Function in Vectors

// count function is used to COUNT --> HOW MANY TIMES AN ELEMENT is PRESENT in a VECTOR

#include <iostream>
#include <vector>
#include <algorithm>    Header file for using count function

using namespace std;

int main()
{

    vector<int> v = {60, 60, 10, 30, 60, 10, 70, 60, 50, 20, 40, 60, 60, 30};

    int noOfTimes = count(v.begin(), v.end(), 60);  //  count function basically counts ki PURE VECTOR me BEGINING se lekar ke END tak "60" TOTAL KITNI BAAR PRESENT HAI

    cout << "NO.of Times the element 60 is present in the vector is : " << noOfTimes;

    noOfTimes = count(v.begin() + 2, v.end(), 60);

    cout << "\nNo. of Times element 60 is PRESENT (AFTER FIRST INDEX ie FROM 2nd INDEX) : " << noOfTimes;

    noOfTimes = count(v.begin(), v.end() - 3, 60);

    cout << "\nNo. of Times element 60 is PRESENT (TILL 4th LAST INDEX) : " << noOfTimes;
}
