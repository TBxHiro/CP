// https://www.codechef.com/START23C/problems/AVGOF3

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  int n, k, x;
  cin >> n >> k >> x;
  int core[k];

  if (x > k)
  {
    cout << -1 << endl;
    return;
  }

  int j = -1;
  f(i, k)
  {
    if (++j != x)
      core[i] = j;
    else
      core[i] = ++j;
  }

  j = 0;
  f(i, n)
  {
    cout << core[j++] << " ";
    if (j == k)
      j = 0;
  }
  cout << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}