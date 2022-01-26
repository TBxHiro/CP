#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  int n, pair = 0;
  cin >> n;
  char c[n][n];

  f(i, n) for (int j = 0; j < n; j++) cin >> c[i][j];

  f(i, n)
  {
    int rc = 0, cc = 0;
    for (int j = 0; j < n; j++)
    {
      if (c[i][j] == 'C')
      {
        rc++;
        if (rc > 1)
          pair += rc - 1;
      }

      if (c[j][i] == 'C')
      {
        cc++;
        if (cc > 1)
          pair += cc - 1;
      }
    }
  }

  cout << pair << endl;
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