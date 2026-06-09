// Write a program to input cost price and selling price of a product. Now calculate profit or loss and print it.

#include <iostream>
using namespace std;

int main()
{
    int cp, sp;
    cout << "Enter cp : ";
    cin >> cp;

    cout << "Enter sp : ";
    cin >> sp;

    if(cp < sp){
        cout << "Profit" << endl << "Amount : " << sp - cp;
    }

    else if(cp == sp){
        cout << "Neither Profit Nor Loss";
    }

    else{
        cout << "Loss" << endl << "Amount : " << cp - sp;
    }

    return 0;
}