#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, code;
  cin >> s;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '.')
      code += '0';
    else if (s[i] == '-')
    {
      code += s[i + 1] == '-' ? '2' : '1';
      i++;
    }
  }
  cout << code;
}