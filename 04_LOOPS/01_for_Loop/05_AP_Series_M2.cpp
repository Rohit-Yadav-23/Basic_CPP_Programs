// Print AP Series ==> 1, 3, 5, 7, 9..................... upto n terms

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of terms ie the value of n : ";
    cin >> n;

    int a = 1;
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}

/*
an = a + (n-1)d

here a = 1, d = 2

then

   an = 1 + (n-1)2
=> an = 2*n - 1

*/