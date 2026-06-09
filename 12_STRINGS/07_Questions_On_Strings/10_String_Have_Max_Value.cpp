/* Given n strings in an ARRAY consisiting of digits from 0 to 9. Return the index of string which has maximum value. (Take 0 based indexing)*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[] = {"0123", "0023", "456", "00182", "940", "002901"};

    string maxstring;
    int max = 0;
    int i = 0;
    while (i < 6)
    {
        int n = stoi(arr[i]);
        if (max < n)
        {
            max = n;
            maxstring = arr[i];
        }
        i++;
    }

    cout << maxstring << " " << max;
}