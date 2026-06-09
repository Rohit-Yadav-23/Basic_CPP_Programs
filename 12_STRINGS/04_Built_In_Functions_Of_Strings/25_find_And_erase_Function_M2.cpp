// find and erase functions of strings (Method - 2)

#include <iostream>
#include <string>

using namespace std;

string subtractIfFound(const string &str1, const string &str2)
{
    string result = str1;
    size_t pos = result.find(str2);

    if (pos != string::npos)
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
    string str1 = "LEET";
    string str2 = "CODE";

    string result = subtractIfFound(str1, str2);
    cout << "Result: " << result << endl;

    return 0;
}
