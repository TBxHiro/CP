#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, a;
  cin >> s;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '-')
    {
      cout << a << " " << s.substr(i + 1);
      break;
    }

    a += s[i];
  }
}