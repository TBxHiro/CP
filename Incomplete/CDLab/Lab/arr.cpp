// array size 5;
// search if value exists in array

#include <iostream>
using namespace std;

int main()
{
  int n;
  bool found = false;
  int a[] = {10, 13, 20, 55, 2};

  cin >> n;
  for (int i = 0; i < 5; i++)
    if (a[i] == n)
    {
      found = true;
      break;
    }
  cout << (found ? " Found" : " Not Found") << endl;
}