//  Display this GP ==> 1, 2, 4, 8, 16, 32, ..............upto 'n' terms and 2, 6, 18, 54, 162 ...................upto 'n' terms

#include <iostream>
using namespace std;

int main()
{
     int n;
     cout << "Enter the range of GP Series or no. of terms : ";
     cin >> n;

     int a = 1;
     for (int i = 1; i <= n; i++)
     {
          cout << a << " ";
          a *= 2;
     }

     cout << endl;

     a = 2;
     for (int i = 1; i <= n; i++)
     {
          cout << a << " ";
          a *= 3;
     }
}