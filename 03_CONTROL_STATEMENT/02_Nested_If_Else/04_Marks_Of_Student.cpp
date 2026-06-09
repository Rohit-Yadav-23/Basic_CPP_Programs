// WAP to input marks of a student and print grade according to following criteria:
// Marks >= 90 : Grade A
// Marks >= 75 and < 90 : Grade B
// Marks >= 50 and < 75 : Grade C
// Marks < 50 : Fail

#include <iostream>
using namespace std;

int main() 
{
    int marks;

    cout << "Enter student marks: ";
    cin >> marks;

    if (marks >= 50) {
        
        if (marks >= 75) {
            
            if (marks >= 90) {
                cout << "Grade A";
            }
            else {
                cout << "Grade B";
            }
        }
        else {
            cout << "Grade C";
        }
    }

    else {
        cout << "Fail";
    }

    return 0;
}