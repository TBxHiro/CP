#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  int n, m, count = 0;
  ;
  cin >> n >> m;

  while (n--)
  {
    int a, b;
    f(i, m)
    {
      cin >> a >> b;
      if (a || b)
        count++;
    }
  }

  cout << count << endl;
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