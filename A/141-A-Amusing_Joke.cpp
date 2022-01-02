//30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a, b, c;
  cin >> a >> b >> c;

  for (int i = 0; i < a.length(); i++)
  {
    int index = c.find(a[i]);
    if ((index >= 0) && index < c.length())
    {
      c.erase(c.begin() + index);
    }
    else
    {
      cout << "NO";
      return 0;
    }
  }

  for (int i = 0; i < b.length(); i++)
  {
    int index = c.find(b[i]);
    if ((index >= 0) && index < c.length())
    {
      c.erase(c.begin() + index);
    }
    else
    {
      cout << "NO";
      return 0;
    }
  }

  if (c.length() == 0)
    cout << "YES";
  else
    cout << "NO";
}