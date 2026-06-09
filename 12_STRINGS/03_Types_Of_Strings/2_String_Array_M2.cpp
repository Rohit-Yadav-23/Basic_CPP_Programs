// String Array (Method 2)

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int size = 5;

  cin.ignore(); // Clear the input buffer (important if you are mixing cin >> and getline)

  string str[size];
  cout << "Enter the STRINGS as an ELEMENT : \n";
  for (int i = 0; i < size; i++)
  {
    getline(cin, str[i]);
  }

  cout << endl << "Output are :\n";
  for (string s : str)
    cout << s << endl;

  return 0;
}
