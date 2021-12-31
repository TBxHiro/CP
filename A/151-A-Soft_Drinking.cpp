//0 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, b, l, lime, slice, salt, nl, np, count = 0;
  cin >> n >> b >> l >> lime >> slice >> salt >> nl >> np;

  int tl = b * l, td = lime * slice;
  while (true)
  {
    if (tl >= nl * n && td >= n && salt >= np * n)
    {
      count++;
      tl -= nl * n;
      td -= n;
      salt -= np * n;
    }
    else
      break;
  }

  cout << count;
}