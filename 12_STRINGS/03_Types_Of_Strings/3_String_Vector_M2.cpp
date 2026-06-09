// Vector of String (Method - 2)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> words;
  int n;

  cout << "Enter the number of strings: ";
  cin >> n;

  cin.ignore();

  for (int i = 0; i < n; ++i)
  {
    string word;
    cout << "Enter string " << i + 1 << ": ";
    getline(cin, word);
    words.push_back(word);
  }

  cout << "You entered:\n";
  for (const string &word : words)
  {
    cout << word << endl;
  }

  return 0;
}