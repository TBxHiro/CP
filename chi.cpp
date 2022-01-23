#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f(i, n) for (int i = 0; i < n; i++)
#define fab(i, a, b) for (int i = a; i < b; i++)
#define rf(i, n) for (int i = n - 1; i >= 0; i++)
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back
#define endl "\n"
#define spc " "
#define sz(a) (int)a.size()
#define sq(a) (a) * (a)
#define int long long
#define all(a) a.begin(), a.end()

void solve()
{
  int n;
  cin >> n;
  vi a(n);

  f(i, n) cin >> a[i];

  int k = n - 1;

  f(i, (n - 1)) if (a[i] > a[i + 1])
  {
    k = i;
    break;
  }

  f(i, n) 
  if (a[i] != a[k])
   cout << a[i] << spc;
  cout << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
