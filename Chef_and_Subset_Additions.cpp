// https://www.codechef.com/LTIME104C/problems/SUBSTADD

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

bool check(int a[], int b[], int n)
{
  f(i, n) if (a[i] >= b[i]) return false;
  return true;
}

void solve()
{
  int n, x, y;
  cin >> n >> x >> y;
  int a[n], b[n], c[n];

  f(i, n) cin >> a[i];
  f(i, n) cin >> b[i], c[i] = b[i] - a[i];
  sort(c, c + n);

      while (!check(a, b, n))
  {
  }
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