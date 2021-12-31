//60 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, f;
  char c;
  cin >> s;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= c)
      c = s[i];
  }

  for (int i = 0; i < s.length(); i++)
  {
    if (c == s[i])
      f += c;
  }
  cout << f;
}