// https://atcoder.jp/contests/abc237/tasks/abc237_a

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  long long int n, p = pow(2, 31);
  cin >> n;
  cout << (n < 0 ? abs(n) <= p
                       ? "Yes"
                       : "No"
           : n < p
               ? "Yes"
               : "No");
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