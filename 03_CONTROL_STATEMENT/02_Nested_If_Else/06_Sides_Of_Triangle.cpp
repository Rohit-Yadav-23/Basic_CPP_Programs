// Check whether the given inputs can form sides of triangle or not                            

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a + b > c) {
        
        if (a + c > b) {
            
            if (b + c > a) {
                cout << "Triangle can be formed";
            }
            else {
                cout << "Triangle cannot be formed";
            }
        }
        else {
            cout << "Triangle cannot be formed";
        }
    }
    
    else {
        cout << "Triangle cannot be formed";
    }

    return 0;
}