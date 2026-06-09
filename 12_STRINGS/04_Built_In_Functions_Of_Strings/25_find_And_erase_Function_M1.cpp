// find and erase functions of strings (Method - 1)

#include <iostream>
#include <string>

using namespace std;

string subtractIfFound(const string &str1, const string &str2)
{
    string result = str1;
    int pos = str1.find(str2);

    if (pos != -1)
    {
        result.erase(pos, str2.length());
    }

    else
    {
        result = "";
    }

    return result;
}

int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";

    string result = subtractIfFound(str1, str2);
    cout << "Result: " << result << endl;

    return 0;
}
