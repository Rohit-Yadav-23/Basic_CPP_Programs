// Member Access Operator (.)

// Member Access Operator (.) is used to access the DATA MEMBERS of a class

#include <iostream>
using namespace std;

class Student
{
    public:

    string name;
    int age;

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Student s;

    // accessing data members using '.'
    s.name = "Rohit";       // Here, we are accessing the data member 'name' of the class 'Student' using the member access operator (.) and assigning it the value "Rohit"
    s.age = 20;

    // accessing member function using '.'
    s.display();
}