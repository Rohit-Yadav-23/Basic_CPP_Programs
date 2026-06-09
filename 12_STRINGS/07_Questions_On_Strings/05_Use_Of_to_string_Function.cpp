/* Que. Find the total number of digits in a number without using any loop */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;
    string str = to_string(x);
    cout << "No. of digits are : " << str.size();
}