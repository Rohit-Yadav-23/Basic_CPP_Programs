// Function Overloading in C++ (Method - 2)

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << a + b << endl;
}

void add(int a, double b)
{
    cout << a + b << endl;
}

int main()
{
    add(10, 20);
    add(10, 35.55);
}

/*
add(10, 20) : This still works as before and calls add(int, int) because both arguments are int.

add(10, 35.5) : This works because now you have defined a function add(int, double) that directly accepts a double.

Here, the 35.5 is a double, and the add(int, double) function is a perfect match, so the compiler chooses this function without any need for type conversion.

Why the Next Program Fails but the This Program Works:
When you call add(10, 35.5), the double argument (35.5) exactly matches the add(int, double) function, so no ambiguity arises.
*/