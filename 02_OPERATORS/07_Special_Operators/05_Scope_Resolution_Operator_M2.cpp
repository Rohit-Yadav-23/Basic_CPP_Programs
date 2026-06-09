// Method 2: Using Scope Resolution Operator (::) with Class

#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void display(); // function declaration
};

void Student ::display() // Here, Scope Resolution Operator (::) is used to define the function 'display()' outside the class 'Student'. It tells the compiler that the function 'display()' belongs to the class 'Student'. Scope Resolution Operator basically connects the Definition of "display()" function with class "Student".
{
    cout << "Name = " << name;
}

int main()
{
    Student s;

    s.name = "India";

    s.display();
}