// https://www.codechef.com/COOK137C/problems/PIZZA_BURGER

#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"
using namespace std;

void solve()
{
  int x, y, z;
  cin >> x >> y >> z;

  cout << (y <= x   ? "PIZZA"
           : z <= x ? "BURGER"
                    : "NOTHING")
       << endl;
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