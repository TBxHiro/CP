// Bismillahir Rahmanir Rahim
// Read the name of Allah, who created you!

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  int n, h, w = 0;
  cin >> n >> h;

  f(i, n)
  {
    int x;
    cin >> x;
    w += (x > h ? 2 : 1);
  }
  cout << w << endl;
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