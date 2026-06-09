//      Reverse the elements of vector without using extra vector

//                          TWO POINTER APPROACH
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector <int> v(n);

    cout << "Enter the elements of vector : ";

    for(int i=0; i<v.size(); i++)
    {
        cin >> v[i];
    }

    int i = 0;                                      // THIS IS CALLED TWO POINTERS APPROACH
    int j = v.size()-1;

    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }

    cout << "Elements in Reverse Order are : ";

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}


/* we can use "for loop" also

for(int i=0, j= v.size()-1; i<=j; i++, j--)
{
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
}

*/