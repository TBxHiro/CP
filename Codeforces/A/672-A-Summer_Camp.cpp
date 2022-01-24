#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

string s;

void ini()
{
  f(i, 1000) s += to_string(i + 1);
}

void solve()
{
  int n;
  cin >> n;

  cout << s[n - 1];
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