// Increment Operators (Pre-Increment and Post-Increment)

#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "num : " << num << endl;

    --num;       // Pre-Decrement Operator  --> First Decreases, then used the value
    cout << "--num : " << num << endl;

    int num2 = num--;       // Post-Decrement Operator --> First Uses value, then decreases the value
    cout << "num-- : " << num << " but num2 : " << num2 << endl;
}