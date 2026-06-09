//          Introduction to STRINGS (Method - 1)

//          STRINGS ARE BASICALLY CHARACTER ARRAYS

#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    //    ⬆️
    // The above written arr[5] is a CHARACTER ARRAY
    // And I have said ABOVE that CHARACTER ARRAYS are called as STRINGS
    // The entire `arr[5]` is also called as a STRING
    // HENCE, The entire `arr[5]` is called both ----> a CHARACTER ARRAY and a STRING

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << "My Name is ROHIT YADAV";

    // The LETTERS, CHARACTERS, WORDS or SENTENCES which are written INSIDE the DOUBLE QUOTES are also called as STRINGS
    // HERE, the sentence ----> "My Name is ROHIT YADAV" is also called as a STRING
}