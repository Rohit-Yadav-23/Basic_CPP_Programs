//  Display this AP - 100, 97, 94, ................ upto all terms which are positive                   

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the last term or the value of n : ";
    cin >> n;

    for(int i = n; i>=1; i -= 3)
    {
        cout << i << " ";
    }

        return 0;
}