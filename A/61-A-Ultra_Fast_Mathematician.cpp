#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a, b, s;
  cin >> a >> b;

  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] != b[i])
      s += '1';
    else
      s += '0';
  }
  cout << s;
}