// https://atcoder.jp/contests/abc236/tasks/abc236_a
// Code Size	563 Byte
// Exec Time	8 ms
// Memory	3648 KB

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  string s;
  char temp;
  int a, b;
  cin >> s >> a >> b;

  temp = s[b - 1];
  s[b - 1] = s[a - 1];
  s[a - 1] = temp;
  cout << s << endl;
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