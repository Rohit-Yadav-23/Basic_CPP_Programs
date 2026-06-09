/*
    Given an array of marks of students if the marks of any student is less than 35 prints it roll number.
    (Roll Number here refers to the index of the array)
*/

#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    cout << "Enter marks of students : ";

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    cout << "Roll No. of those Students whose Marks are less than 35 are : ";
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " ";
        }
    }
    return 0;
}