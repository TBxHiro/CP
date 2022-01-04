#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i = 0, s = 0;
  cin >> n;

  while (++i && s <= n)
  {
    s += i;
    if (s == n)
    {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
}