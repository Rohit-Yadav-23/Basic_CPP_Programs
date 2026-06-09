/* Given two strings str1 and str2, return true if str2 is an ANAGRAM of str1, and false otherwise */

// LEETCODE --> 242

/*
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false           */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1;
    cout << "Enter string str1 : ";
    cin >> str1;

    string str2;
    cout << "Enter string str2 : ";
    cin >> str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    cout << str1 << endl << str2 << endl;

    if (str1 == str2)
        cout << true;

    else
        cout << false;
}
