//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int length, l = 0, r = 0;
  string n;

  cin >> length >> n;

  for (int i = 0; i < length; i++)
  {
    if (n[i] != '4' && n[i] != '7')
    {
      cout << "NO";
      return 0;
    }
  }

  for (int i = 0; i < length / 2; i++)
  {
    l += n[i];
    r += n[length - i - 1];
  }

  if (l != r)
    cout << "NO";
  else
    cout << "YES";
}