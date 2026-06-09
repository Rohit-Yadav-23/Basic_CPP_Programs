// auto keyword with Iterators

//  "auto Keyword" basically reduces the WRITING SYNTAX of iterator 
//  "auto keyword" is basically TAKES all kinds OF DIFFERENT DATA TYPES into it


//  ITERATORS are basically like POINTER VARIABLES which is used to STORE the ADDRESS of any VARIABLE or DATA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {10, 20, 30, 40, 50, 60, 70, 80};

    vector <int> :: iterator it = v.begin();        // SYNTAX of DECLARING an ITERATOR

    cout << *it << endl;
    cout << *(it+1) << endl;
    cout << *(it+2) << endl;


    for(it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
        
        
    auto iter = v.begin();

    
    cout << endl << endl << *iter << endl;
    cout << *(iter+1) << endl;
    cout << *(iter+2) << endl ;

    for(auto itera = v.begin(); itera != v.end(); itera++){
        cout << *itera << " ";   
    }

}