#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i = 0, max = 0, total = 0;
  cin >> n;
  while (n-- && ++i)
  {
    int a;
    cin >> a;
    total += a;
    if (a > max)
      max = a;
  }

  cout << ((max * i) - total);
}