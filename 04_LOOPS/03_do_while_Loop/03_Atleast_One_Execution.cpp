//WAP to show that do-while loop executes at least once even if the condition is false.                 

#include <iostream>
using namespace std;

int main() {

    int i = 10;

    do {
        cout << "Hello";
    }

    while(i < 5);        // The condition is false but still the loop executes at least once because in do-while loop the condition is checked after executing the loop body.

    return 0;
}