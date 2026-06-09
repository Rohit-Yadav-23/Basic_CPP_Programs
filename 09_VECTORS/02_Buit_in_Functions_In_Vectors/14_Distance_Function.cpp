//                          DISTANCE FUNCTION                                                  

//  The "distance FUNCTION" calculates the number of elements between two iterators. It takes two arguments: the beginning iterator and the ending iterator.
//    - Syntax: distance(first_iterator, second_iterator);
//    - Returns: The number of elements between the two iterators.

#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>  
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 5, 40, 25};

    int dis = distance(vec.begin(), vec.end());
    cout << "Distance between the first and last element: " << dis << endl;



    auto it = find(vec.begin(), vec.end(), 40);

    dis = distance(vec.begin(), it);

    cout << "Distance between the first element and 40: " << dis << endl;



    it = find(vec.begin(), vec.end(), 20);

    dis = distance(vec.begin(), it);

    cout << "Distance between the first element and 20: " << dis << endl;



    it = find(vec.begin(), vec.end(), 5);

    dis = distance(vec.begin(), it);

    cout << "Distance between the first element and 5: " << dis << endl;
    return 0;
}
