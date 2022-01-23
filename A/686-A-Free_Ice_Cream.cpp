// Bismillahir Rahmanir Rahim
// Read the name of Allah, who created you!

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  int n, dis = 0;
  long long d = 0;
  cin >> n >> d;

  f(i, n)
  {
    char c;
    int x;

    cin >> c >> x;

    if (c == '+')
      d += x;
    else if (x > d)
      dis++;
    else
      d -= x;
  }

  cout << d << " " << dis << endl;
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