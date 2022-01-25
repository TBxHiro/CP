#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  int n, c, li = 0, ra = 0, time = 0;
  cin >> n >> c;
  int p[n], t[n];

  f(i, n) cin >> p[i];
  f(i, n) cin >> t[i];

  f(i, n)
  {
    time += t[i];
    li += max(0, p[i] - c * time);
  }

  time = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    time += t[i];
    ra += max(0, p[i] - c * time);
  }
  cout << (li > ra   ? "Limak"
           : li < ra ? "Radewoosh"
                     : "Tie");
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