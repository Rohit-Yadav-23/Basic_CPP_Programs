// Function with Argument but No Return Type

#include <iostream>
using namespace std;

void Star_Triangle(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    
    return;
}

int main()
{
    Star_Triangle(3);
    Star_Triangle(4);
    Star_Triangle(5);

    return 0;
}