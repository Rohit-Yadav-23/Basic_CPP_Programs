// Increment Operators (Pre-Increment and Post-Increment)

#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "num : " << num << endl;

    ++num;       // Pre-Increment Operator  --> First Increases, then used the value
    cout << "++num : " << num << endl;

    int num2 = num++;       // Post-Increment Operator --> First Uses value, then increases the value
    cout << "num++ : " << num << " but num2 : " << num2 << endl;
}