// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x, n, m;
    cin >> x >> n >> m;

    if (x <= m * 10)
    {
      cout << "YES" << endl;
      continue;
    }

    while (n--)
      x = x / 2 + 10;
    cout << (x <= m * 10 ? "YES" : "NO") << endl;
  }
}