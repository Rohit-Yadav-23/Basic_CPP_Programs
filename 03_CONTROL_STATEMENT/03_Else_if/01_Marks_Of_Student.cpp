// WAP to input marks of a student and print grade according to criteria.

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter the marks of student : ";
    cin >> marks;

    if (marks >= 91)
        cout << "Excellent";

    else if (marks >= 81)
        cout << "Very Good";

    else if (marks >= 71)
        cout << "Good";

    else if (marks >= 61)
        cout << "Can do Better";

    else if (marks >= 51)
        cout << "Average";

    else if (marks >= 41)
        cout << "Below Average";

    else
        cout << "Fail";
}