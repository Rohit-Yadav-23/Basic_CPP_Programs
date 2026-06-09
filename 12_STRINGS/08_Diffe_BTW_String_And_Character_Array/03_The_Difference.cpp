// The Difference between a String and a Character Array in C++

#include <iostream>
using namespace std;

int main()
{
  char arr[5] = {'A', 'B', 'C', 'D', 'E'};

  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";

  /* This is a CHARACTER ARRAY  and  NOT a STRING */
  // This is because, there is no NULL CHARACTER PRESENT in this CHARACTER ARRAY arr
  // Why No NULL character is PRESENT HERE?
  /* This is because SIZE of the CHARACTER ARRAY arr is EQUAL TO the NO. OF CHARACTERS present in it. As because, the compiler is NOT ABLE to INSERT the NULL CHARACTER in this CHARACTER ARRAY arr, So, it is NOT ABLE to CONVERT this CHARACTER ARRAY into a STRING */
  cout << endl;

  char brr[6] = {'A', 'B', 'C', 'D', 'E'};
  for (int i = 0; i < 6; i++)
    cout << brr[i] << " ";

  /* This is a CHARACTER ARRAY and STRING BOTH.
  This is because, in this CHARACTER ARRAY brr[6], There is a NULL CHARACTER PRESENT IN IT. Which is present at the last index
  of this ARRAY. We, can't see it, but there is a NULL CHARACTER which is INSERTED by the compiler AUTOMATICALLY.......

  */
}