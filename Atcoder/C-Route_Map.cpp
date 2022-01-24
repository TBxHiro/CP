// https://atcoder.jp/contests/abc236/tasks/abc236_c
// Code Size	744 Byte
// Exec Time	28 ms
// Memory	9816 KB

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  string s[n], t[m];

  f(i, n) cin >> s[i];
  f(i, m) cin >> t[i];

  int j = 0;
  f(i, n)
  {
    if (s[i] == t[j] && j < m)
    {
      cout << "Yes" << endl;
      j++;
    }
    else
      cout << "No" << endl;
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  // cin >> t;
  while (t--)
    solve();

  return 0;
}