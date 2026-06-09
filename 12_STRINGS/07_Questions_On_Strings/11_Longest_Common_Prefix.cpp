// LEETCODE --> 14
/*  Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &str)
{
    for (int i = 0; i < str.size(); i++)
        cout << str[i] << endl;

    if (str.size() == 1)
        return str[0];

    sort(str.begin(), str.end());

    string first_string = str[0];
    string last_string = str[str.size() - 1];

    string s = "";

    for (int i = 0; i < (min(first_string.size(), last_string.size())); i++)
    {
        if (first_string[i] == last_string[i]) // COMPARING the EACH CHARACTERS of STRING
            s = s + first_string[i];

        else
            return s;
    }

    return s;
}

int main()
{
    int n;
    cout << "Enter the size of vector string : ";
    cin >> n;

    vector<string> strs;
    cout << "Enter the strings as an ELEMENT for this string vector : \n";
    for (int i = 0; i < n; i++)
    {
        string inp_string;
        cin >> inp_string;
        strs.push_back(inp_string);
    }

    cout << endl;

    string receive = longestCommonPrefix(strs);

    cout << "\nCommon Prefixes are : " << receive;
}