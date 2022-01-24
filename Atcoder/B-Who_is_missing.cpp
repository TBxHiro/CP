// https://atcoder.jp/contests/abc236/tasks/abc236_b
// Code Size	958 Byte
// Exec Time	38 ms
// Memory	4332 KB

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

pair<int, int> ap[100001];

void ini()
{
  f(i, 100001)
  {
    ap[i].first = i;
    ap[i].second = 0;
  }
}

void solve()
{
  int n;
  cin >> n;
  n = n * 4 - 1;

  f(i, n)
  {
    int a;
    cin >> a;
    ap[a].second += 1;
  }

  f(i, n)
  {
    if (ap[i].second == 3)
    {
      cout << ap[i].first;
      break;
    }
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ini();
  int t = 1;
  // cin >> t;
  while (t--)
    solve();

  return 0;
}